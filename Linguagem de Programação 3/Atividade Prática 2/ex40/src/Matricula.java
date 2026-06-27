public class Matricula {

    private Aluno aluno;
    private Disciplina disciplina;
    private double notaFinal;

    public Matricula(Aluno aluno, Disciplina disciplina, double notaFinal) {
        this.aluno = aluno;
        this.disciplina = disciplina;
        this.notaFinal = notaFinal;
    }

    public boolean aprovado() {
        return notaFinal >= 7.0;
    }

    public void exibirResumo() {
        System.out.println("Aluno: " + aluno.getNome());
        System.out.println("Disciplina: " + disciplina.getNome());
        System.out.println("Nota: " + notaFinal);
        System.out.println("Situação: " + (aprovado() ? "Aprovado" : "Reprovado"));
    }
}