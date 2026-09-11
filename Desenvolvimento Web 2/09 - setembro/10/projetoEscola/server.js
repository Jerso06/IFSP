const express = require('express');
const sqlite3 = require('sqlite3').verbose(); // verbose = erros mais detalhados
const path = require('path');
// Cria o servidor Express
const app = express();

// Configura o EJS como motor de templates
app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));

// Permite receber dados de formulários HTML
app.use(express.urlencoded({ extended: true }));

// Conecta ao banco e cria a tabela
const db = new sqlite3.Database('./escola.db', (erro) => {
    if (erro) return console.error(erro.message);
    db.run('CREATE TABLE IF NOT EXISTS alunos (id INTEGER PRIMARY KEY AUTOINCREMENT, nome TEXT, idade INTEGER)');
});

app.get('/', (req, res) => {
    //res.render procura em views/formulario.ejs
    res.render('formulario');
});

app.post('/insert', (req, res) => {
    // Desestrutura os campos do formulário (vem do req.body)
    const { nome, idade } = req.body;
    const sql = 'INSERT INTO alunos (nome, idade) VALUES (?, ?)';
    db.run(sql, [nome, idade], function (erro) {
        if (erro) return res.send('Ocorreu um erro ao salvar o aluno.');
        // Após salvar, redireciona para a listagem
        res.redirect('/select');
    });
});

app.get('/select', (req, res) => {
    db.all('SELECT * FROM alunos', (erro, linhas) => {
        if (erro) return res.send('Erro ao buscar.');
        // Injeta o array 'linhas' no template lista.ejs
        res.render('lista', { alunos: linhas });
    });
});

app.get('/editar/:id', (req, res) => {
    const id = req.params.id;
    const sql = 'SELECT * FROM alunos WHERE id = ?';
    db.get(sql, [id], (erro, aluno) => {
        if (erro || !aluno)
            return res.send('Aluno não encontrado.');
        res.render('editar', { aluno });
    });
});

app.post('/editar/:id', (req, res) => {
    const id = req.params.id;
    const { nome, idade } = req.body;
    const sql = 'UPDATE alunos SET nome = ?, idade = ? WHERE id = ? ';
    db.run(sql, [nome, idade, id], (erro) => {
        if (erro) return res.send('Erro ao atualizar.');
        res.redirect('/select');
    });
});

app.post('/deletar/:id', (req, res) => {
    const id = req.params.id;
    const sql = 'DELETE FROM alunos WHERE id = ?';
    db.run(sql, [id], (erro) => {
        if (erro) return res.send('Erro ao excluir.');
        res.redirect('/select');
    });
});

app.listen(3000, () => console.log('Servidor rodando em http://localhost:3000'));