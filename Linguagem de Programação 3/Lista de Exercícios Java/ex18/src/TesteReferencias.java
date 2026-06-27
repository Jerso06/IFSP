public class TesteReferencias {
    public static void main(String[] args){
        Professor prof1 = new Professor();
        prof1.setNome("Jerso");
        prof1.setMatricula(12345);
        prof1.setCargaHoraria(20);
        System.out.println("Carga horária professor 1: " + prof1.getCargaHoraria());

        Professor prof2 = new Professor();
        prof2.setNome("Murilo");
        prof2.setMatricula(54321);
        prof2.setCargaHoraria(60);
        System.out.println("Carga horária professor 2: " + prof2.getCargaHoraria());

        Professor prof3 = prof1;
        prof3.setCargaHoraria(40);
        System.out.println("Carga horária professor 1: " + prof1.getCargaHoraria());

        /*
        * a carga horária do professor 1 que deveria ser 20 foi alterada para 40
        * a partir da mudança feita pelo "professor 3", pois no java não ocorre a
        * cópia de dados de um objeto para outro, mas sim a passagem de referência
        * fazendo com que prof1 e prof3 apontassem para o mesmo objeto, então quando
        * alterado a carga horária da onde o prof3 apontava, mudou o mesmo objeto
        * que o prof1 apontava, fazendo essa mudança de valor.*/
    }
}
