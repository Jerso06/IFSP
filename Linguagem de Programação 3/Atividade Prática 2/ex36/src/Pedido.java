public class Pedido {

    private Cliente cliente;
    private ItemPedido[] itens = new ItemPedido[10];
    private int quantidadeItens = 0;

    public Pedido(Cliente cliente) {
        this.cliente = cliente;
    }

    public void adicionarItem(ItemPedido item) {
        if (quantidadeItens < itens.length) {
            itens[quantidadeItens] = item;
            quantidadeItens++;
        }
    }

    public double calcularTotal() {
        double total = 0;

        for (int i = 0; i < quantidadeItens; i++) {
            total += itens[i].calcularSubtotal();
        }

        return total;
    }

    public void exibirPedido() {
        System.out.println("Cliente: " + cliente.getNome());

        System.out.println("Itens:");
        for (int i = 0; i < quantidadeItens; i++) {
            System.out.println("- " + itens[i].getDescricao());
        }

        System.out.println("Valor total: R$ " + calcularTotal());
    }
}