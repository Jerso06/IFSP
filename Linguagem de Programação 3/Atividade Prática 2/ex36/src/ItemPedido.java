public class ItemPedido {

    private String descricao;
    private int quantidade;
    private double precoUnitario;

    public ItemPedido(String descricao, int quantidade, double precoUnitario) {
        this.descricao = descricao;
        this.quantidade = quantidade;
        this.precoUnitario = precoUnitario;
    }

    public double calcularSubtotal() {
        return quantidade * precoUnitario;
    }

    public String getDescricao() {
        return descricao;
    }
}