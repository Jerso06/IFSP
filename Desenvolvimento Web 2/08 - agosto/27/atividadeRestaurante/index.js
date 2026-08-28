const express = require('express');
const path = require('path');
const app = express();

app.use(express.static(path.join(__dirname, 'styles')));
app.use(express.static(path.join(__dirname, 'scripts')));
app.use(express.urlencoded({ extended: true }));

const cardapio = require("./itens.json")

app.get('/dados.json', (req, res) => {
    res.json(cardapio);
});


app.get('/', function (req, res) {
    res.sendFile(path.join(__dirname, "pages", "index.html"), function (err) {
        if (err) {
            console.error("Error sending file:", err);
            res.status(500).send("Internal Server Error");
        }
    });
});

app.get('/cardapio', function (req, res) {
    res.sendFile(path.join(__dirname, 'pages', 'cardapio.html'), function (err) {
        if (err) {
            console.error("Error sending file:", err);
            res.status(500).send("Internal Server Error");
        }
    });
});

app.get('/fale-conosco', function (req, res) {
    res.sendFile(path.join(__dirname, 'pages', 'contato.html'), function (err) {
        if (err) {
            console.error("Error sending file:", err);
            res.status(500).send("Internal Server Error");
        }
    });
});

app.post('/fale-conosco', (req, res) => {
    const nome = req.body.nome;
    const email = req.body.email;
    const assunto = req.body.assunto;
    const msg = req.body.mensagem;
    console.log('Nome:', nome);
    console.log('Email:', email);
    console.log('Assunto:', assunto);
    console.log('Mensagem:', msg);
    res.send('Mensagem recebida! Obrigado.');
});

app.listen(3000, () => {
    console.log("Servidor rodando na url http://localhost:3000");
});