var meuCarro = {
    marca: "Honda",
    ano: 2016,
    modelo: "fit",
    cor: "branco",

    ligar: function(){
        console.log("Carro ligado");
    }
};

function Carro(marca, ano, modelo, cor){
    this.marca = marca;
    this.ano = ano;
    this.modelo = modelo;
    this.cor = cor;
    this.ligar = function(){
        console.log("Carro ligado");
    }
}

var meuAntigoCarro = new Object();
meuAntigoCarro.marca = "toyota";
meuAntigoCarro.ano = 2010;
meuAntigoCarro.modelo = "hilux";
meuAntigoCarro.cor = "preta";
meuAntigoCarro.ligar = function() {
    console. log("Carro ligado");
}

var meuOutroCarro = new Carro("fiat", 2018, "uno", "azul");

for(campo in meuCarro){
    console.log(`${campo}: ${meuCarro[campo]}`);
}