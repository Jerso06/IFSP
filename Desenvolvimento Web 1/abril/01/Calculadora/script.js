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
        } else if (resultado.indexOf('-') != -1) {
            if (resultado.indexOf('-') == 0) {
                n1 = Number(resultado.substring(0, resultado.indexOf('-')))
            } else {
                n1 = Number(resultado.substring(0, resultado.indexOf('-')));
            }
            n2 = Number(resultado.substring(resultado.indexOf('-') + 1, resultado.length));
            subtrair(n1, n2)
        } else if (resultado.indexOf('/') != -1) {
            n1 = Number(resultado.substring(0, resultado.indexOf('/')));
            n2 = Number(resultado.substring(resultado.indexOf('/') + 1, resultado.length));
            dividir(n1, n2)
        } else if (resultado.indexOf('*') != -1) {
            n1 = Number(resultado.substring(0, resultado.indexOf('*')));
            n2 = Number(resultado.substring(resultado.indexOf('*') + 1, resultado.length));
            multiplicar(n1, n2)
        } else {
            resultado = resultado.replaceAll('.', ',');
            document.getElementById("display").innerHTML = resultado;
        }
    } else {
        clean();
    }
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

    if (resultado[0] == '-') {
        resultado = resultado.substring(1, display.length);
        document.getElementById("display").innerHTML = resultado;
    } else {
        resultado = '-' + resultado;
        document.getElementById("display").innerHTML = resultado;
    }
}

function verificaSinais(texto) {
    if (texto[0] == '*' || texto[0] == '/') {
        return false;
    } else if (texto.indexOf("+") != -1) {
        let pos = texto.indexOf("+");

        if (texto[pos - 1] == '+' || texto[pos - 1] == '-' || texto[pos - 1] == '/' || texto[pos - 1] == '*') {
            return false;
        } else if (texto[pos + 1] == '+' || texto[pos + 1] == '-' || texto[pos + 1] == '/' || texto[pos + 1] == '*') {
            return false;
        }
    }

    if (texto.indexOf("-") != -1) {
        let pos = texto.indexOf("-");

        if (texto[pos - 1] == '+' || texto[pos - 1] == '-' || texto[pos - 1] == '/' || texto[pos - 1] == '*') {
            return false;
        } else if (texto[pos + 1] == '+' || texto[pos + 1] == '-' || texto[pos + 1] == '/' || texto[pos + 1] == '*') {
            return false;
        }
    }

    if (texto.indexOf("/") != -1) {
        let pos = texto.indexOf("/");

        if (texto[pos - 1] == '+' || texto[pos - 1] == '-' || texto[pos - 1] == '/' || texto[pos - 1] == '*') {
            return false;
        } else if (texto[pos + 1] == '+' || texto[pos + 1] == '-' || texto[pos + 1] == '/' || texto[pos + 1] == '*') {
            return false;
        }
    }

    if (texto.indexOf("*") != -1) {
        let pos = texto.indexOf("*");

        if (texto[pos - 1] == '+' || texto[pos - 1] == '-' || texto[pos - 1] == '/' || texto[pos - 1] == '*') {
            return false;
        } else if (texto[pos + 1] == '+' || texto[pos + 1] == '-' || texto[pos + 1] == '/' || texto[pos + 1] == '*') {
            return false;
        }
    }

    return true;
}