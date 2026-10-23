// models/livro.js
// Model: só fala com os dados. Não conhece req, res nem HTML.
const pool = require('../config/database');

// TODO 4.3: getAll() devolvendo o array do livros.json
//const livros = require('../livros.json');
//function getAll() {
//    return livros;
//}

// TODO 5.2: troque o getAll() para buscar no MySQL com o pool
async function getAll() {
    const [rows] = await pool.query('SELECT * FROM livros');
    return rows;
}

// TODO 5.3: create(titulo, autor, ano)
async function create(titulo, autor, ano) {
    const sql = `
        INSERT INTO livros (titulo, autor, ano)
        VALUES (?, ?, ?)
    `;

    const [result] = await pool.query(sql, [titulo, autor, ano]);
    return result;
}

// TODO 5.3: remove(id)
async function remove(id) {
    const sql = 'DELETE FROM livros WHERE id = ?';

    const [result] = await pool.query(sql, [id]);
    return result;
}

module.exports = {
    getAll,
    create,
    remove
};