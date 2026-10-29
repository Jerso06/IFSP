const Livro = require('../models/livro');

// TODO 4.3 e 5.2: lista os livros usando async/await e try/catch
exports.list = async (req, res) =>{
    try{
        const livros = await Livro.getAll();
        res.render('livros', {livros, user: req.session.user});
    }catch (erro){
        console.error(erro);
        res.status(500).send("Erro ao buscar os livros")
    }
};

// TODO 5.3: exibe o formulário de cadastro
exports.showCadasterForm = (req, res) => {
    res.render('novo-livro');
};

// TODO 5.3: cria um livro
exports.createLivro = async (req, res) => {
    try{
        const {titulo, autor, ano} = req.body;

        await Livro.create(titulo, autor, ano);

        res.redirect('/livros');
    }catch(erro){
        console.error(erro);
        res.status(500).send('Erro ao cadastrar o livro');
    }
};

// TODO 5.3: remove um livro pelo ID
exports.removeLivro = async (req, res) => {
    try{
        const {id} = req.params;

        await Livro.remove(id);

        res.redirect('/livros');
    }catch(erro){
        console.error(erro);
        res.status(500).send("Erro ao remover o livro");
    }
}