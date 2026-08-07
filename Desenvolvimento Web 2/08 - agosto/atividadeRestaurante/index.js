const express = require('express');
const path = require('path');
const app = express();

app.use(express.static(path.join(__dirname, 'styles')));
app.use(express.static(path.join(__dirname, 'scripts')));
app.get('/dados.json', (req, res) => {
    res.sendFile(path.join(__dirname, 'itens.json'));
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

app.listen(3000, () => {
    console.log("Servidor rodando na url http://localhost:3000");
});