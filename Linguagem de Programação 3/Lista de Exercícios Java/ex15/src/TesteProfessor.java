public class TesteProfessor {
    public static void main(String[] args) {
        Professor pf1 = new Professor();
        Professor pf2 = new Professor();

        pf1.setNome("Pedro");
        pf1.setMatricula(1234);
        pf1.setCargaHoraria(40);
        System.out.println("Nome: " + pf1.getNome() + "\nMatricula: " + pf1.getMatricula()
                + "\nCarga horaria semanal: " + pf1.getCargaHoraria()
                + "\nCarga horária mensal: " + pf1.getCargaHorariaMensal());

        pf2.setNome("Maria");
        pf2.setMatricula(4321);
        pf2.setCargaHoraria(50);
        System.out.println("Nome: " + pf2.getNome() + "\nMatricula: " + pf2.getMatricula()
                + "\nCarga horaria semanal: " + pf2.getCargaHoraria()
                + "\nCarga horária mensal: " + pf2.getCargaHorariaMensal());
    }
}
