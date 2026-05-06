async function buscarDados(){
    let cep = document.getElementById("cep").value;

    if(cep != ""){
        let resposta = await fetch(`https://viacep.com.br/ws/${cep}/json/`);
        let respostaJSON = await resposta.json();

        let logradouro = document.getElementById('logradouro');
        let bairro = document.getElementById('bairro');
        let complemento = document.getElementById('complemento');
        let localidade = document.getElementById('localidade');
        let uf = document.getElementById('uf');

        logradouro.value = respostaJSON.logradouro;
        bairro.value = respostaJSON.bairro;
        complemento.value = respostaJSON.complemento;
        localidade.value = respostaJSON.localidade;
        uf.value = respostaJSON.uf;
    }
}