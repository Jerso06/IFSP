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
