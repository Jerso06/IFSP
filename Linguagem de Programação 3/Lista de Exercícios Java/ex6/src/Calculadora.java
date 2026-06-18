public class Calculadora {
    public static void main(String[] args) {
        double v1 = 6;
        double v2 = 2;
        int opcao = 4;

        switch (opcao){
            case 1:
                System.out.println("Soma = " + (v1+v2));
                break;
            case 2:
                System.out.println("Subtração = " + (v1-v2));
                break;
            case 3:
                System.out.println("Multiplicação = " + (v1*v2));
                break;
            case 4:
                if(v2 == 0){
                    System.out.println("Divisão por 0");
                }else{
                    System.out.println("Divisão = " + (v1/v2));
                }
                break;
            default:
                System.out.println("Opção inválida");
        }
    }
}
