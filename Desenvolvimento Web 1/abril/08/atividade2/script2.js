let notas = [8.5, 6.0, 4.5, 10.0, 7.5, 5.0];

let soma = 0;
for(nota of notas){
    soma += nota;
}
console.log(`Média da sala: ${(soma/notas.length).toFixed(2)}`);

let maiorNota;
notas.sort((a, b) => a - b);
maiorNota = notas[notas.length-1];
console.log(`Maior nota: ${maiorNota}`);

let aprovados = [];
for(nota of notas){
    if(nota >= 7.0){
        aprovados.push(nota);
    }
}

console.log(`Quantidade de Aprovados: ${aprovados.length}`);
console.log("Lista dos Aprovados:");
for(nota of aprovados){
    console.log(`- ${nota}`);
}