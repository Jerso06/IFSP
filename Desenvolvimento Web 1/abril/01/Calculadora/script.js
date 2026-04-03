function clean() {
    document.getElementById("display").innerHTML = "";
}

function inserir(num) {
    const operadores = ['+', '-', '*', '/'];
    let resultado = document.getElementById("display").innerHTML;
    if (operadores.includes(num)) {
        if (resultado.length == 0) {
            if (num == '-') {
                document.getElementById("display").innerHTML += num;
            }
            return;
        } else if (num == '-' && resultado[resultado.length - 1] == '/' || num == '-' && resultado[resultado.length - 1] == '*') {
            document.getElementById("display").innerHTML += num;
            return;
        } else if (resultado[resultado.length - 1] == '-' && operadores.includes(resultado[resultado.length - 2])) {
            if (num != '-') {
                resultado = resultado.substring(0, resultado.length - 1);
                document.getElementById("display").innerHTML = resultado;
            }
            return;
        } else if (operadores.includes(resultado[resultado.length - 1])) {
            document.getElementById("display").innerHTML = resultado.substring(0, resultado.length - 1) + num;
            return;
        }
    }
    document.getElementById("display").innerHTML += num;
}

function back() {
    let resultado = document.getElementById("display").innerHTML;

    document.getElementById("display").innerHTML = resultado.substring(0, resultado.length - 1);
}

function calcular() {
    let resultado = document.getElementById("display").innerHTML;
    resultado = resultado.replaceAll(',', '.');
    let n1, n2;

    if (resultado.length != 0) {
        if (verificaSinais(resultado)) {
            if (resultado.indexOf('+', 1) != -1) {
                if (!isNaN(n1 = Number(resultado.substring(0, resultado.indexOf('+', 1)))) &&
                    !isNaN(n2 = Number(resultado.substring(resultado.indexOf('+', 1) + 1, resultado.length)))) {
                    somar(n1, n2);
                } else {
                    resultado = "Erro no Cálculo";
                    document.getElementById("display").innerHTML = resultado;
                    setTimeout(function () {
                        clean();
                    }, 2000);
                }
            } else if (resultado.indexOf('/') != -1) {
                if (!isNaN(n1 = Number(resultado.substring(0, resultado.indexOf('/', 1)))) &&
                    !isNaN(n2 = Number(resultado.substring(resultado.indexOf('/', 1) + 1, resultado.length)))) {
                    dividir(n1, n2);
                } else {
                    resultado = "Erro no Cálculo";
                    document.getElementById("display").innerHTML = resultado;
                    setTimeout(function () {
                        clean();
                    }, 2000);
                }
            } else if (resultado.indexOf('*') != -1) {
                if (!isNaN(n1 = Number(resultado.substring(0, resultado.indexOf('*', 1)))) &&
                    !isNaN(n2 = Number(resultado.substring(resultado.indexOf('*', 1) + 1, resultado.length)))) {
                    multiplicar(n1, n2);
                } else {
                    resultado = "Erro no Cálculo";
                    document.getElementById("display").innerHTML = resultado;
                    setTimeout(function () {
                        clean();
                    }, 2000);
                }
            } else if (resultado.indexOf('-', 1) != -1) {
                if (!isNaN(n1 = Number(resultado.substring(0, resultado.indexOf('-', 1)))) &&
                    !isNaN(n2 = Number(resultado.substring(resultado.indexOf('-', 1) + 1, resultado.length)))) {
                    subtrair(n1, n2);
                } else {
                    resultado = "Erro no Cálculo";
                    document.getElementById("display").innerHTML = resultado;
                    setTimeout(function () {
                        clean();
                    }, 2000);
                }
            } else {
                finalizarExibicao(resultado);
            }
        } else {
            resultado = "Erro de Formatação";
            document.getElementById("display").innerHTML = resultado;
            setTimeout(function () {
                clean();
            }, 2000);
        }
    }
}

function finalizarExibicao(valor) {
    if (isNaN(valor)) {
        document.getElementById("display").innerHTML = "Múltiplas Operações";
        setTimeout(function () {
            clean();
        }, 2000);
        return;
    }

    valor = valor.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = valor;
}

function somar(n1, n2) {
    let resultado = n1 + n2;
    finalizarExibicao(resultado);
}

function subtrair(n1, n2) {
    let resultado = n1 - n2;
    finalizarExibicao(resultado);
}

function dividir(n1, n2) {
    let resultado = n1 / n2;
    finalizarExibicao(resultado);
}

function multiplicar(n1, n2) {
    let resultado = n1 * n2;
    finalizarExibicao(resultado);
}

function inverteSinal() {
    let resultado = document.getElementById("display").innerHTML;

    resultado = resultado.replaceAll('-', '#tmp#');
    resultado = resultado.replaceAll('+', '-')
    resultado = resultado.replaceAll('#tmp#', '+');

    document.getElementById("display").innerHTML = resultado;
}

function verificaSinais(texto) {
    const operadores = ['+', '-', '*', '/'];

    if (texto[0] == '*' || texto[0] == '/' || texto[0] == '.') {
        return false;
    } else if (operadores.includes(texto[texto.length - 1])) {
        return false;
    }

    return true;
}