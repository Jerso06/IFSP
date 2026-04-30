function passarCampo(idCampo){
    let campo = document.getElementById(`${idCampo}`);
    let listaD = document.getElementById("listaDisponiveis");
    let listaR = document.getElementById("listaRelatorios");

    
    if(listaD.contains(campo)){
        listaR.appendChild(campo);
        listaD.removeChild(campo);
    }else{
        listaD.appendChild(campo);
        listaR.removeChild(campo);
    }
}

async function gerarTabela(){
    let tabela = document.getElementById("tabelaResultado");
    tabela.innerHTML = "";
    let thead = document.createElement("thead");
    let linhaHead = document.createElement('tr');
    let verificaID = 0;
    let verificaNome = 0;
    let verificaCidade = 0;
    let verificaValor = 0;

    let campos = document.querySelectorAll("#listaRelatorios li");
    campos.forEach(item => {
        if (item.id === "idRegistro") {
            let item = document.createElement('th');
            item.innerHTML = "ID";
            linhaHead.appendChild(item);
            verificaID = 1;
        }else if(item.id === "nome"){
            let item = document.createElement('th');
            item.innerHTML = "Nome";
            linhaHead.appendChild(item);
            verificaNome = 1;
        }else if(item.id === "cidade"){
            let item = document.createElement('th');
            item.innerHTML = "Cidade";
            linhaHead.appendChild(item);
            verificaCidade = 1;
        }else if(item.id === "valor"){
            let item = document.createElement('th');
            item.innerHTML = "valor";
            linhaHead.appendChild(item);
            verificaValor = 1;
        }
    });
    thead.appendChild(linhaHead);

    let dados = await fetch('dados.json');
    dados = await dados.json();

    let tbody = document.createElement('tbody');
    dados.forEach(objeto => {
        let linha = document.createElement('tr');

        if(verificaID){
            let id = document.createElement('td');
            id.innerHTML = objeto.id;
            linha.appendChild(id);
        }

        if(verificaNome){
            let nome = document.createElement('td');
            nome.innerHTML = objeto.nome;
            linha.appendChild(nome);
        }

        if(verificaCidade){
            let cidade = document.createElement('td');
            cidade.innerHTML = objeto.cidade;
            linha.appendChild(cidade);
        }

        if(verificaValor){
            let valor = document.createElement('td');
            valor.innerHTML = objeto.venda;
            linha.appendChild(valor);
        }

        tabela.appendChild(linha);
    });
}