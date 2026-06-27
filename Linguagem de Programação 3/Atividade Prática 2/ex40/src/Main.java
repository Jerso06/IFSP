public class Main {

    public static void main(String[] args) {

        Aluno a1 = new Aluno("João", "2025001");
        Aluno a2 = new Aluno("Maria", "2025002");

        Disciplina d1 = new Disciplina("Programação Java", 80);
        Disciplina d2 = new Disciplina("Banco de Dados", 60);

        Matricula m1 = new Matricula(a1, d1, 8.5);
        Matricula m2 = new Matricula(a2, d2, 6.0);

        m1.exibirResumo();
        System.out.println();
        m2.exibirResumo();

        System.out.println("\nTotal de alunos cadastrados: " + Aluno.getTotalAlunos());
    }
}