function passarCampo(idCampo) {
    let campo = document.getElementById(`${idCampo}`);
    let listaD = document.getElementById("listaDisponiveis");
    let listaR = document.getElementById("listaRelatorios");


    if (listaD.contains(campo)) {
        campo.classList.remove("campoD");
        campo.classList.add("campoR");
        listaR.appendChild(campo);
        listaD.removeChild(campo);
    } else {
        campo.classList.add("campoD");
        campo.classList.remove("campoR");
        listaD.appendChild(campo);
        listaR.removeChild(campo);
    }
}

async function gerarTabela() {
    let tabela = document.getElementById("tabelaResultado");
    tabela.innerHTML = "";
    let verificaID = 0;
    let verificaNome = 0;
    let verificaCidade = 0;
    let verificaValor = 0;

    let campos = document.querySelectorAll("#listaRelatorios li");
    campos.forEach(item => {
        if (item.id === "idRegistro") {
            verificaID = 1;
        } else if (item.id === "nome") {
            verificaNome = 1;
        } else if (item.id === "cidade") {
            verificaCidade = 1;
        } else if (item.id === "valor") {
            verificaValor = 1;
        }
    });


    let thead = document.createElement("thead");
    let linhaHead = document.createElement('tr');

    if (verificaID) {
        let item = document.createElement('th');
        item.innerHTML = "ID";
        linhaHead.appendChild(item);
    }
    if (verificaNome) {
        let item = document.createElement('th');
        item.innerHTML = "Nome";
        linhaHead.appendChild(item);
    }
    if (verificaCidade) {
        let item = document.createElement('th');
        item.innerHTML = "Cidade";
        linhaHead.appendChild(item);
    }
    if (verificaValor) {
        let item = document.createElement('th');
        item.innerHTML = "Valor";
        linhaHead.appendChild(item);
    }
    thead.appendChild(linhaHead);
    tabela.appendChild(thead);

    let dados = await fetch('dados.json');
    dados = await dados.json();

    let tbody = document.createElement('tbody');
    dados.forEach(objeto => {
        let linha = document.createElement('tr');

        if (verificaID) {
            let id = document.createElement('td');
            id.innerHTML = objeto.id;
            linha.appendChild(id);
        }

        if (verificaNome) {
            let nome = document.createElement('td');
            nome.innerHTML = objeto.nome;
            linha.appendChild(nome);
        }

        if (verificaCidade) {
            let cidade = document.createElement('td');
            cidade.innerHTML = objeto.cidade;
            linha.appendChild(cidade);
        }

        if (verificaValor) {
            let valor = document.createElement('td');
            valor.innerHTML = objeto.venda;
            linha.appendChild(valor);
        }

        tabela.appendChild(linha);
    });
}