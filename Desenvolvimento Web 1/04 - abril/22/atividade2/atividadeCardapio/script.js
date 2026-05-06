async function carregarCardapio(){
    let resposta = await fetch('dados.json');
    let dados = await resposta.json();

    dados.forEach(objeto => {
        let divisao = document.createElement('div');
        let titulo = document.createElement('h1');
        let descricao = document.createElement('h3');
        let custo = document.createElement('p');

        titulo.innerHTML = objeto.nome;
        descricao.innerHTML = objeto.desc;
        custo.innerHTML = 'R$ ' + objeto.preco;

        divisao.appendChild(titulo);
        divisao.appendChild(descricao);
        divisao.appendChild(custo);

        divisao.classList.add('divisao');
        document.getElementById('itens').appendChild(divisao);
    })
}