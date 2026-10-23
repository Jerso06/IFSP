// middleware/exigirLogin.js

// TODO 6.2: se o usuário estiver logado (req.session.isLoggedIn),
//           deixe a requisição seguir com next(); senão, redirecione para /login.
module.exports = (req, res, next) => {
    next(); // <- substitua: hoje ele deixa TODO MUNDO passar
};
