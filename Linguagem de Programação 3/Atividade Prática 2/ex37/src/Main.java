import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número: ");
        int numero = scanner.nextInt();

        Tabuada tabuada = new Tabuada(numero);
        tabuada.exibirTabuada();

        scanner.close();
    }
}