function sortear(){
    let qtd_numeros = Number(document.getElementById("qtd_numeros").value);
    let entre = Number(document.getElementById("entre").value);
    let ate = Number(document.getElementById("ate").value);
    let alerta = "";
    let sorteados = [];

    if(qtd_numeros > ate - entre + 1){
        qtd_numeros = ate - entre + 1;
        alerta = "<h4>Quantidade solicitada maior que possíveis.</h4>";
    }

    for(i = 0; i < qtd_numeros; i++){
        let valor = Math.floor(Math.random() * (ate-entre + 1)) + entre;

        while(sorteados.includes(valor)){
            valor = Math.floor(Math.random() * (ate-entre + 1)) + entre;
        }

        sorteados.push(valor);
    }

    sorteados.sort((a,b) => a-b);

    let resultado = document.getElementById("numsSorteados");
    let textoFinal = "";
    for(item of sorteados){
        textoFinal += `<p>${item}</p>`;
    }

    resultado.innerHTML = textoFinal;
    document.getElementById("alerta").innerHTML = alerta;
}