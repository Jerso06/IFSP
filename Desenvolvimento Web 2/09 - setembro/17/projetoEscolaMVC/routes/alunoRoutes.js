const express = require('express');
const router = express.Router();
const alunoController = require('../controllers/alunoController');

router.get('/', alunoController.showForm);
router.post('/insert', alunoController.create);
router.get('/select', alunoController.list);
router.get('/editar/:id', alunoController.showEdit);
router.post('/editar/:id', alunoController.update);
router.post('/deletar/:id', alunoController.remove);
module.exports = router;