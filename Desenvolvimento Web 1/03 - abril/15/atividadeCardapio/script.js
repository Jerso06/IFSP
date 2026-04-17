function ItemCardapio(nome, desc, preco){
    this.nome = nome;
    this.desc = desc;
    this.preco = preco;
}

let item1 = new ItemCardapio('Pizza', 'Massa crocante com molho de tomate artesanal, queijo derretido e ingredientes selecionados.', 50.75);
let item2 = new ItemCardapio('Hamburguer', 'Pão macio, carne suculenta grelhada, queijo, alface, tomate e molho especial da casa.', 30.99);
let item3 = new ItemCardapio('Calzone', 'Massa assada recheada com queijo, presunto e temperos, dourada por fora e cremosa por dentro.', 13.13);
let item4 = new ItemCardapio('Coca-Cola', 'Refrigerante clássico, gelado e refrescante, perfeito para acompanhar sua refeição.', 10.90);
let item5 = new ItemCardapio('Peixe-Frito', 'Filé de peixe empanado e frito, crocante por fora e macio por dentro, servido bem quente.', 17.80);

let itens = [];
itens.push(item1);
itens.push(item2);
itens.push(item3);
itens.push(item4);
itens.push(item5);

for(objeto of itens){
    let divisao = document.createElement('div');
    let titulo = document.createElement('h1');
    let descricao = document.createElement('h3');
    let custo = document.createElement('p');

    titulo.innerHTML = objeto.nome;
    descricao.innerHTML = objeto.desc;
    custo.innerHTML = 'R$' + objeto.preco;

    divisao.appendChild(titulo);
    divisao.appendChild(descricao);
    divisao.appendChild(custo);

    divisao.classList.add('divisao');
    document.getElementById('itens').appendChild(divisao);
}