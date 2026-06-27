public class Main {

    public static void main(String[] args) {

        // Cadastro de dois alunos
        Aluno aluno1 = new Aluno("João", "2025001", "Engenharia");
        Aluno aluno2 = new Aluno("Maria", "2025002", "Ciência da Computação");

        // Alteração de dados
        aluno1.setCurso("Sistemas de Informação");
        aluno2.setNome("Maria Clara");

        // Exibição das informações finais
        System.out.println("=== Aluno 1 ===");
        aluno1.exibirDados();

        System.out.println();

        System.out.println("=== Aluno 2 ===");
        aluno2.exibirDados();
    }
}