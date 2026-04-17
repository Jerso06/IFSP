let listaCompra = ['Pão', 'Leite', 'Café', 'Açúcar', 'Arroz'];

console.log(`Primeiro item: ${listaCompra[0]}`);
console.log(`Último item: ${listaCompra[listaCompra.length-1]}`);

listaCompra.splice(2, 1, 'Chá');

listaCompra.push("Maçã");

listaCompra.shift();

console.log(`Tamanho do array: ${listaCompra.length}`);

console.log("Lista de compras: ");
for (item of listaCompra){
    console.log(`- ${item}`);
}