// db.all = busca TODAS as linhas
db.all('SELECT * FROM alunos', (erro, alunos) => {
    if (erro) {
        return console.error('Erro na consulta:', erro.message);
    }
    // alunos é um ARRAY de objetos
    console.log('Lista de Alunos:');
    alunos.forEach((aluno) => {
        console.log(
            `ID: ${aluno.id} - Nome: ${aluno.nome} - Idade: ${aluno.idade}`
        );
    });
});
