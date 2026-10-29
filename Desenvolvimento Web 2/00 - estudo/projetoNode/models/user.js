const pool = require('../config/database');

async function createUser(username, cryptedPassword){
    await pool.query(
        'insert into users (username, password) values (?, ?)',
        [username, cryptedPassword]
    );
}

async function findUserByUsername(username){
    const [linhas] = await pool.query(
        'select * from users where username = ?',
        [username]
    );
    return linhas[0];
}

async function updateUser(oldUsername, oldPassword, newUsername, newPassword){
    await pool.query(
        'update users set username = ?, password = ? where username = ? and password = ?',
        [newUsername, newPassword, oldUsername, oldPassword]
    );
}

async function deleteUser(idUser){
    await pool.query('delete from users where id = ?', [idUser]);
}

module.exports = {createUser, findUserByUsername, updateUser, deleteUser}