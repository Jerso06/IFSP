const Aluno = require('../models/alunoModel');

// Exibe o formulário de cadastro
const showForm = (req, res) => {
    res.render('formularioCadastro');
};

// Lista todos os alunos
const list = (req, res) => {
    Aluno.getAll((erro, alunos) => {
        if (erro) {
            return res.status(500).send('Erro ao buscar.');
        }

        res.render('lista', { alunos });
    });
};

// Exibe o formulário de edição
const showEdit = (req, res) => {
    const { id } = req.params;

    Aluno.getById(id, (erro, aluno) => {
        if (erro) {
            return res.status(500).send('Erro ao buscar aluno.');
        }

        if (!aluno) {
            return res.status(404).send('Aluno não encontrado.');
        }

        res.render('editar', { aluno });
    });
};

// Cadastra um novo aluno
const create = (req, res) => {
    const { nome, idade } = req.body;

    Aluno.insert(nome, idade, (erro) => {
        if (erro) {
            return res.status(500).send('Erro ao salvar.');
        }

        res.redirect('/select');
    });
};

// Atualiza um aluno
const update = (req, res) => {
    const { nome, idade } = req.body;
    const { id } = req.params;

    Aluno.update(nome, idade, id, (erro) => {
        if (erro) {
            return res.status(500).send('Erro ao atualizar.');
        }

        res.redirect('/select');
    });
};

// Remove um aluno
const remove = (req, res) => {
    const { id } = req.params;

    Aluno.remove(id, (erro) => {
        if (erro) {
            return res.status(500).send('Erro ao deletar.');
        }

        res.redirect('/select');
    });
};

module.exports = {
    showForm,
    list,
    showEdit,
    create,
    update,
    remove
};