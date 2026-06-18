public class TesteEnum {
    public static void main(String[] args){
        DiaSemana ds = DiaSemana.QUINTA;

        switch(ds){
            case SEGUNDA:
                System.out.println("Dia útil.");
                break;
            case TERCA:
                System.out.println("Dia útil.");
                break;
            case QUARTA:
                System.out.println("Dia útil.");
                break;
            case QUINTA:
                System.out.println("Dia útil.");
                break;
            case SEXTA:
                System.out.println("Dia útil.");
                break;
            case SABADO:
                System.out.println("Fim de semana.");
                break;
            case DOMINGO:
                System.out.println("Fim de semana.");
                break;
            default:
                break;
        }

        //teste comparação
        System.out.println(ds == DiaSemana.QUARTA); //false
        System.out.println(ds == DiaSemana.QUINTA); //true
    }
}
