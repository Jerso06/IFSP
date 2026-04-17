function calcGorjeta(){
    let valor = Number(document.getElementById('valor').value)
    let porcentagem = Number(document.getElementById('porcentagem').value)
    let result = document.getElementById('valorResultado')

    result.value = (valor * (1 + porcentagem / 100)).toFixed(2)
}