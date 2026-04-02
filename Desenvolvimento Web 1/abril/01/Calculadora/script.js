function clean(){
    document.getElementById("display").innerHTML = "";
}

function inserir(num){
    document.getElementById("display").innerHTML += num;
}

function back(){
    let display = document.getElementById("display").innerHTML;

    document.getElementById("display").innerHTML = display.substring(0,display.length-1);
}

function calcular(){
    let resultado = document.getElementById("display").innerHTML;
    resultado = resultado.replaceAll(',', '.');
    if(resultado.indexOf('+') != -1){
        let n1 = Number(resultado.substring(0,resultado.indexOf('+')));
        let n2 = Number(resultado.substring(resultado.indexOf('+')+1, resultado.length));
        somar(n1, n2);
    }else if(resultado.indexOf('-') != -1){
        let n1;
        if(resultado.indexOf('-') == 0){
            n1 = Number(resultado.substring(0,resultado.indexOf('-')))
        }
        n1 = Number(resultado.substring(0,resultado.indexOf('-')));
        let n2 = Number(resultado.substring(resultado.indexOf('-')+1, resultado.length));
        subtrair(n1,n2)
    }else if(resultado.indexOf('/') != -1){
        let n1 = Number(resultado.substring(0,resultado.indexOf('/')));
        let n2 = Number(resultado.substring(resultado.indexOf('/')+1, resultado.length));
        dividir(n1,n2)
    }else if(resultado.indexOf('*') != -1){
        let n1 = Number(resultado.substring(0,resultado.indexOf('*')));
        let n2 = Number(resultado.substring(resultado.indexOf('*')+1, resultado.length));
        multiplicar(n1,n2)
    }else{
        clean();
    }
}

function somar(n1, n2){
    let resultado = n1 + n2;
    resultado = resultado.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = resultado;
}

function subtrair(n1, n2){
    
    let resultado = n1 + n2;
    resultado = resultado.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = resultado;
}

function dividir(n1, n2){
    
    let resultado = n1 / n2;
    resultado = resultado.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = resultado;
}

function multiplicar(n1, n2){
    let resultado = n1 * n2;
    resultado = resultado.toString().replaceAll('.', ',');
    document.getElementById("display").innerHTML = resultado;
}

function inverteSinal(){
    let resultado = document.getElementById("display").innerHTML;

    if(resultado[0] == '-'){
        resultado = resultado.substring(1,display.length);
    }else{
        resultado[0] = '-';
    }
}