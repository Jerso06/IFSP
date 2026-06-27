public class Professor {
    private String nome;
    private String matricula;
    private int cargaHoraria; // horas por semana

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public int getCargaHoraria() {
        return cargaHoraria;
    }

    public void setCargaHoraria(int cargaHoraria) {
        this.cargaHoraria = cargaHoraria;
    }

    // Método para calcular a carga horária mensal
    public int calcularCargaHorariaMensal() {
        return cargaHoraria * 4;
    }
}