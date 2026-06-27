public class Aluno {

    private String nome;
    private String matricula;
    private String curso;

    // Construtor padrão
    public Aluno() {
        this("Sem nome", "0000", "Sem curso");
    }

    // Construtor com apenas o nome
    public Aluno(String nome) {
        this(nome, "0000", "Sem curso");
    }

    // Construtor completo
    public Aluno(String nome, String matricula, String curso) {
        this.nome = nome;
        this.matricula = matricula;
        this.curso = curso;
    }

    public void exibirDados() {
        System.out.println("Nome: " + nome);
        System.out.println("Matrícula: " + matricula);
        System.out.println("Curso: " + curso);
    }
}