const express = require('express');
const path = require('path');

const app = express();

// Configura o EJS como motor de templates
app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));

// Permite receber dados dos formulários
app.use(express.urlencoded({ extended: true }));

// Importa as rotas dos alunos
const alunoRoutes = require('./routes/alunoRoutes');

// Registra as rotas
app.use('/', alunoRoutes);

// Inicia o servidor
app.listen(3000, () => {
    console.log('Servidor rodando em http://localhost:3000');
});