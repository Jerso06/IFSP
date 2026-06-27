public class Main {

    public static void main(String[] args) {

        Cliente cliente = new Cliente("João");

        Pedido pedido = new Pedido(cliente);

        pedido.adicionarItem(new ItemPedido("Mouse", 2, 80.0));
        pedido.adicionarItem(new ItemPedido("Teclado", 1, 150.0));
        pedido.adicionarItem(new ItemPedido("Monitor", 1, 900.0));

        pedido.exibirPedido();
    }
}