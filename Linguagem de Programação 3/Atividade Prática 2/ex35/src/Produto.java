public class Produto {

    private String nome;
    private int estoque;

    public Produto(String nome, int estoque) {
        this.nome = nome;
        this.estoque = estoque;
    }

    public void entradaEstoque(int quantidade) {
        estoque += quantidade;
    }

    public void saidaEstoque(int quantidade) {
        if (quantidade <= estoque) {
            estoque -= quantidade;
        } else {
            System.out.println("Estoque insuficiente.");
        }
    }

    public void exibirDados() {
        System.out.println("Produto: " + nome);
        System.out.println("Estoque final: " + estoque);
    }
}