public class Biblioteca {

    private Livro[] livros = new Livro[10];
    private int quantidade = 0;

    public void cadastrarLivro(Livro livro) {
        if (quantidade < livros.length) {
            livros[quantidade] = livro;
            quantidade++;
        } else {
            System.out.println("Biblioteca cheia.");
        }
    }

    public void listarLivros() {
        System.out.println("Livros cadastrados:");

        for (int i = 0; i < quantidade; i++) {
            System.out.println("- " + livros[i].getTitulo());
        }
    }
}