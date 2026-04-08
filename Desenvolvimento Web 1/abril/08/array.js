let frutas = ['Maçã', 'Banana'];

console.log(frutas.length);

//Retorna o item
for (let fruta of frutas){
    console.log(fruta);
}

//Retorna o indice do item
for (let fruta in frutas){
    console.log(fruta);
}

frutas.forEach(function (item, indice, array){
    console.log(item, indice, array);   
})