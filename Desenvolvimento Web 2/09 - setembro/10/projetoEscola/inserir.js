const sql = 'INSERT INTO alunos (nome, idade) VALUES (?, ?)';
db.run(sql, ['Carlos Silva', 15],
    function (erro) {
        if (erro) {
            return console.error(
                'Erro ao inserir:', erro.message
            );
        }
        console.log(
            ` Aluno ID: ${this.lastID}`
        );
    }
);
