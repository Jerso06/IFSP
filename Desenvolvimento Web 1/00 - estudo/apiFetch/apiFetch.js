async function carregarDados() {
    let resposta = await fetch('https://jsonplaceholder.typicode.com/posts');
    
    if (resposta.status === 200) {
        let respostaJson = await resposta.json();

        let retornos = document.getElementById('retornos');

        for (let objeto of respostaJson) {
            let divisao = document.createElement('div');
            divisao.classList.add('divisao');

            let idUser = document.createElement('p');
            let titulo = document.createElement('h1');
            let corpo = document.createElement('h3');

            idUser.innerHTML = objeto.id;
            titulo.innerHTML = objeto.title;
            corpo.innerHTML = objeto.body;

            divisao.appendChild(titulo);
            divisao.appendChild(corpo);
            divisao.appendChild(idUser);

            retornos.appendChild(divisao);
        }
    }
}