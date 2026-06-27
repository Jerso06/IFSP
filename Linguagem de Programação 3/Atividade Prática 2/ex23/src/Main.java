public class Main {
    public static void main(String[] args) {
        Produto produto = new Produto();

        produto.setNome("Mouse Gamer");
        produto.setPreco(149.90);
        produto.setEstoque(20);

        produto.exibirDados();

        produto.aumentarEstoque(10);
        produto.reduzirEstoque(5);

        System.out.println("\nApós as alterações:");
        produto.exibirDados();
    }
}