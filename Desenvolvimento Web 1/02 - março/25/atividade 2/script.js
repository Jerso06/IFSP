function calcOrcamento() {
    let qtd = Number(document.getElementById('quantidade').value)
    let buffet = document.querySelector('input[name="buffet"]:checked').value
    let decoracao = document.getElementById('decoracao')
    let dj = document.getElementById('dj')
    let fotografo = document.getElementById('fotografo')
    let result = document.getElementById('valorResultado')
    let valorFinal = 0

    if (buffet == 'basico') {
        valorFinal += qtd * 50
    } else {
        valorFinal += qtd * 80
    }

    if (decoracao.checked) {
        valorFinal += 200
    }
    if (dj.checked) {
        valorFinal += 350
    }
    if (fotografo.checked) {
        valorFinal += 450
    }

    result.value = valorFinal.toString()
}