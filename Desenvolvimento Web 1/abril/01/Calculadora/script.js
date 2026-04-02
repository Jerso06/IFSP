function clean() {
    document.getElementById("display").innerHTML = "";
}

function inserir(num) {
    document.getElementById("display").innerHTML += num;
}

function back() {
    let display = document.getElementById("display").innerHTML;

    document.getElementById("display").innerHTML = display.substring(0, display.length - 1);
}

function calcular() {
    let resultado = document.getElementById("display").innerHTML;
    resultado = resultado.replaceAll(',', '.');
    let n1, n2;

    if (resultado.length != 0 && verificaSinais(resultado)) {
        if (resultado.indexOf('+') != -1) {
            n1 = Number(resultado.substring(0, resultado.indexOf('+')));
            n2 = Number(resultado.substring(resultado.indexOf('+') + 1, resultado.length));
            somar(n1, n2);
        } else if (resultado.includes('-')) {
            let indiceOperador = resultado.indexOf('-', 1);

            if (indiceOperador != -1) {
                n1 = Number(resultado.substring(0, indiceOperador));
                n2 = Number(resultado.substring(indiceOperador + 1, resultado.length));
                subtrair(n1, n2);
            } else if (resultado.startsWith('-')) {
                finalizarExibicao(resultado);
            }
        } else if (resultado.indexOf('/') != -1) {
            n1 = Number(resultado.substring(0, resultado.indexOf('/')));
            n2 = Number(resultado.substring(resultado.indexOf('/') + 1, resultado.length));
            dividir(n1, n2);
        } else if (resultado.indexOf('*') != -1) {
            n1 = Number(resultado.substring(0, resultado.indexOf('*')));
            n2 = Number(resultado.substring(resultado.indexOf('*') + 1, resultado.length));
            multiplicar(n1, n2);
        } 
        else {
            finalizarExibicao(resultado);
        }
    } else {
        clean();
    }
}

function finalizarExibicao(valor) {
    valor = valor.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = valor;
}

function somar(n1, n2) {
    let resultado = n1 + n2;
    resultado = resultado.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = resultado;
}

function subtrair(n1, n2) {
    let resultado = n1 - n2;
    resultado = resultado.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = resultado;
}

function dividir(n1, n2) {
    let resultado = n1 / n2;
    resultado = resultado.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = resultado;
}

function multiplicar(n1, n2) {
    let resultado = n1 * n2;
    resultado = resultado.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = resultado;
}

function inverteSinal() {
    let resultado = document.getElementById("display").innerHTML;

    resultado = resultado.replaceAll('-', '#tmp#');
    resultado = resultado.replaceAll('+', '-')
    resultado = resultado.replaceAll('#tmp#', '+');

    document.getElementById("display").innerHTML = resultado;
}

function verificaSinais(texto) {
    if (texto[0] == '*' || texto[0] == '/') {
        return false;
    }

    const operadores = ['+', '-', '*', '/'];

    for (let i = 0; i < texto.length; i++) {
        let caractereAtual = texto[i];
        let proximoCaractere = texto[i + 1];

        if (operadores.includes(caractereAtual)) {
            
            if (operadores.includes(proximoCaractere) && proximoCaractere !== '-') {
                return false;
            }

            if (proximoCaractere === '-' && operadores.includes(texto[i + 2])) {
                return false;
            }

            if (i === texto.length - 1) {
                return false;
            }
        }
    }

    return true;
}