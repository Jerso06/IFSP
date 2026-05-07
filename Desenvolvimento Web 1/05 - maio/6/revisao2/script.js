async function filtrarDados() {
  let dados = await fetch("clientes.json");
  dados = await dados.json();

  let id = document.getElementById("id").value;
  let nome = document.getElementById("nome").value;
  let cidade = document.getElementById("cidade").value;
  let vendas = document.getElementById("vendas").value;

  let tabela = document.getElementsByTagName("tbody")[0];
  tabela.innerHTML = "";

  let arrayFinal = dados.filter((element) => {
    let verificaID = 1,
      verificaNome = 1,
      verificaCidade = 1,
      verificaVendas = 1;

    if (id != "") {
      if (!String(element.id).includes(id)) {
        verificaID = 0;
      }
    }

    if (nome != "") {
      if (!element.nome.toLowerCase().includes(nome.toLowerCase())) {
        verificaNome = 0;
      }
    }

    if (cidade != "") {
      if (!element.cidade.toLowerCase().includes(cidade.toLowerCase())) {
        verificaCidade = 0;
      }
    }

    if (vendas != "") {
      if (element.vendas < vendas) {
        verificaVendas = 0;
      }
    }

    if (verificaID && verificaNome && verificaCidade && verificaVendas) {
      return element;
    }
  });

  arrayFinal.forEach((element) => {
    let linha = document.createElement("tr");

    let linhaID = document.createElement("td");
    linhaID.innerHTML = element.id;
    linha.appendChild(linhaID);

    let linhaNome = document.createElement("td");
    linhaNome.innerHTML = element.nome;
    linha.appendChild(linhaNome);

    let linhaCidade = document.createElement("td");
    linhaCidade.innerHTML = element.cidade;
    linha.appendChild(linhaCidade);

    let linhaVendas = document.createElement("td");
    linhaVendas.innerHTML = `R$ ${element.vendas}`;
    linha.appendChild(linhaVendas);

    tabela.appendChild(linha);
  });
}
