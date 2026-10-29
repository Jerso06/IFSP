// app.js
require('dotenv').config();
const express = require('express');
const session = require('express-session');
const authRoutes = require('./routes/authRoutes');
const livrosRoutes = require('./routes/livroRoutes');

const app = express();

app.set('view engine', 'ejs');
app.use(express.urlencoded({ extended: true }));
app.use(session({
    secret: process.env.SESSION_SECRET,
    resave: false,
    saveUninitialized: false
}));

// TODO 1.2: crie a rota GET /sobre
app.get('/sobre', (req, res) => {
    res.send('Página de sobre');
});

// TODO 2.2: leia o livros.json com require() e crie as rotas
//           GET /api/livros e GET /api/livros/antigos
const livros = require('./livros.json');
app.get('/api/livros', (req, res) => {
    res.json(livros);
});

app.get('/api/livros/antigos', (req, res) => {
    const livrosAntigos = livros.filter(livro => livro.ano < 1900);
    res.json(livrosAntigos);
});


app.get('/', (req, res) => res.redirect('/livros'));
app.use('/', authRoutes);

// TODO 3.1: importe routes/livroRoutes.js e monte-o em /livros
app.use('/livros', livrosRoutes);

// TODO 1.2: crie a resposta 404 "Página não encontrada"
//           (pense bem em ONDE ela deve ficar)
app.use((req, res) => {
    res.status(404).send("Erro 404: Página não encontrada")
});

app.listen(3000, () => {
    console.log('Servidor rodando na porta 3000');
});
