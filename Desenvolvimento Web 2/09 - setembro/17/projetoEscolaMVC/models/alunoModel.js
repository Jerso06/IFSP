// Script para criar o banco e a tabela alunos
const sqlite3 = require('sqlite3');
// 1. Abre a conexão (cria escola.db se não existir)
const db = new sqlite3.Database('./escola.db', (erro) => {
    if (erro) return console.error('Erro ao abrir:', erro.message);
    console.log(' Conectado ao SQLite!');
    // 2. Cria a tabela (IF NOT EXISTS evita erro se já existir)
    db.run(`CREATE TABLE IF NOT EXISTS alunos (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            nome TEXT,
            idade INTEGER
    )`, (erro) => {
        if (erro) return console.error(erro.message);
        console.log(' Tabela pronta!');
    });
});

const getAll = (cb) => db.all('SELECT * FROM alunos', cb);
const getById = (id, cb) => db.get('SELECT * FROM alunos WHERE id = ?', [id], cb);
const insert = (nome, idade, cb) => db.run('INSERT INTO alunos (nome, idade) VALUES (?, ?)', [nome, idade], cb);
const update = (nome, idade, id, cb) => db.run('UPDATE alunos SET nome = ?, idade = ? WHERE id = ?', [nome, idade, id], cb);
const remove = (id, cb) => db.run('DELETE FROM alunos WHERE id = ?', [id], cb);

module.exports = { getAll, getById, insert, update, remove };
