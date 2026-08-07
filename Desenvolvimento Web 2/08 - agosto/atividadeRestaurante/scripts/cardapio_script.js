async function loadItems(){
    let dados = await fetch('/dados.json');
    dados = await dados.json();

    dados.forEach(objeto => {
        let item = document.createElement('div');
        let titulo = document.createElement('h3');
        let descricao = document.createElement('p');
        let custo = document.createElement('h4');

        titulo.innerHTML = objeto.nome;
        titulo.classList.add('item_nome');

        descricao.innerHTML = objeto.desc;
        descricao.classList.add('item_desc');

        custo.innerHTML = 'R$ ' + objeto.preco;
        custo.classList.add('item_preco');

        item.appendChild(titulo);
        item.appendChild(descricao);
        item.appendChild(custo);

        item.classList.add('item');
        document.getElementsByTagName('main')[0].appendChild(item);
    })
}