// routes/livroRoutes.js
// Este router é montado em app.js com app.use('/livros', livroRoutes),
// então aqui os caminhos são RELATIVOS a /livros.
const express = require('express');
const router = express.Router();
const livroController = require('../controllers/livroController');
const exigirLogin = require('../middleware/exigirLogin');

router.use(exigirLogin);

// TODO 3.1: GET /livros -> renderiza a view 'livros' com os dados do livros.json
/*
const livros = require('./livros.json');
router.get('/', (req, res) => res.render('livros', {livros}))
*/
//(na questão 4.3 esta rota passa a chamar o controller)
router.get('/', livroController.list);

// TODO 5.3: GET /livros/novo, POST /livros e POST /livros/:id/delete
router.get('/novo', livroController.showCadasterForm);
router.post('/', livroController.createLivro);
router.post('/:id/delete', livroController.removeLivro);

// TODO 6.2: proteja todas as rotas deste arquivo com o middleware exigirLogin

module.exports = router;
