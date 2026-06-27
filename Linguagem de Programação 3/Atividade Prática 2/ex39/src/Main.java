public class Main {

    public static void main(String[] args) {

        Aluno aluno1 = new Aluno();
        Aluno aluno2 = new Aluno("João");
        Aluno aluno3 = new Aluno("Maria", "2025001", "Ciência da Computação");

        aluno1.exibirDados();
        System.out.println();

        aluno2.exibirDados();
        System.out.println();

        aluno3.exibirDados();
    }
}