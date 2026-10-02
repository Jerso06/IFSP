const pool = require("../config/database");

async function findUserByUsername(username){
    const [linhas] = await pool.query(
        'select * from users where username = ?',
        [username]
    );
    return linhas[0];
}

async function create(username, senhaCriptografada){
    await pool.query(
        'insert into users (username, password) values (?, ?)',
        [username, senhaCriptografada]
    );
}

module.exports = {findUserByUsername, create};