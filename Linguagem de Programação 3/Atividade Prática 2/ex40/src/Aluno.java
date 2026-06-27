public class Aluno {

    private static int totalAlunos = 0;

    private String nome;
    private String matricula;

    public Aluno() {
        this("Sem nome", "0000");
    }

    public Aluno(String nome, String matricula) {
        this.nome = nome;
        this.matricula = matricula;
        totalAlunos++;
    }

    public String getNome() {
        return nome;
    }

    public String getMatricula() {
        return matricula;
    }

    public static int getTotalAlunos() {
        return totalAlunos;
    }
}