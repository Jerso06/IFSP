// models/livro.js
// Model: só fala com os dados. Não conhece req, res nem HTML.
const pool = require('../config/database');

// TODO 4.3: getAll() devolvendo o array do livros.json
//const livros = require('../livros.json');
//function getAll() {
//    return livros;
//}

// TODO 5.2: troque o getAll() para buscar no MySQL com o pool
async function getAll(){
    const [rows] = await pool.query('select * from livros');
    return rows
}

// TODO 5.3: create(titulo, autor, ano)
async function create(titulo, autor, ano){
    await pool.query(
        'insert into livros (titulo, autor, ano) values (?, ?, ?)',
        [titulo, autor, ano]
    );
}

// TODO 5.3: remove(id)
async function remove(id){
    await pool.query(
        'delete from livros where id = ?',
        [id]
    );
}

module.exports = {getAll, create, remove};