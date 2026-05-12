import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.print("Informe o primeiro valor: ");
        int primeiro = leitor.nextInt();
        System.out.print("Informe o segundo valor: ");
        int segundo = leitor.nextInt();

        System.out.print("Informe o sinal de operação que quer realizar: ");
        char operacao = leitor.next().charAt(0);

        switch (operacao) {
            case '+':
                System.out.println("Resultado: " + (primeiro + segundo));
                break;
            case '-':
                System.out.println("Resultado: " + (primeiro - segundo));
                break;
            case '*':
                System.out.println("Resultado: " + (primeiro * segundo));
                break;
            case '/':
                if(segundo == 0) {
                    System.out.println("Impossivel dividir por 0");
                }else {
                    System.out.println("Resultado: " + (primeiro / segundo));
                }
                break;
            default:
                System.out.println("Operador inválido");
                break;
        }
    }
}