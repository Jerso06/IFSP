public class Main {
    public static void main(String[] args){
        Aluno aluno1 = new Aluno();
        aluno1.setNome("João");
        aluno1.setMatricula("2025001");
        aluno1.setCurso("Engenharia");

        Aluno aluno2 = new Aluno("Maria", "2025002", "Ciência da Computação");

        System.out.println(aluno1.getNome());
        System.out.println(aluno2.getNome());
    }
}
