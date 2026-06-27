public class Main {

    public static void main(String[] args) {
        Produto produto = new Produto("Notebook", 10);

        produto.entradaEstoque(5);

        produto.saidaEstoque(3);
        produto.saidaEstoque(4);

        produto.exibirDados();
    }
}