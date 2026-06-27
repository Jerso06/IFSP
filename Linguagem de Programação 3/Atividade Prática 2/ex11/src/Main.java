public class Main {
    public static void main(String[] args) {
        enum DiaSemana {SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO}

        DiaSemana dia = DiaSemana.SEXTA;

        switch (dia){
            case SEGUNDA:
                System.out.println("Dia útil");
                break;
            case TERCA:
                System.out.println("Dia útil");
                break;
            case QUARTA:
                System.out.println("Dia útil");
                break;
            case QUINTA:
                System.out.println("Dia útil");
                break;
            case SEXTA:
                System.out.println("Dia útil");
                break;
            case SABADO:
                System.out.println("Fim de semana");
                break;
            case DOMINGO:
                System.out.println("Fim de semana");
                break;
        }
    }
}