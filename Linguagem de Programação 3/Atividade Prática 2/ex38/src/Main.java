public class Main {

    public static void main(String[] args) {

        Produto produto = new Produto("Notebook", 3500.00, 10);

        produto.setPreco(-500);      // Inválido
        produto.setEstoque(-3);      // Inválido

        produto.entradaEstoque(5);
        produto.saidaEstoque(20);    // Inválido
        produto.saidaEstoque(4);

        produto.exibirDados();
    }
}