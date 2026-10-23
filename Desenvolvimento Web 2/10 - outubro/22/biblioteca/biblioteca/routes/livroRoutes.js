// routes/livroRoutes.js
// Este router é montado em app.js com app.use('/livros', livroRoutes),
// então aqui os caminhos são RELATIVOS a /livros.
const express = require('express');
const router = express.Router();

// TODO 3.1: GET /livros -> renderiza a view 'livros' com os dados do livros.json
//           (na questão 4.3 esta rota passa a chamar o controller)

// TODO 5.3: GET /livros/novo, POST /livros e POST /livros/:id/delete

// TODO 6.2: proteja todas as rotas deste arquivo com o middleware exigirLogin

module.exports = router;
