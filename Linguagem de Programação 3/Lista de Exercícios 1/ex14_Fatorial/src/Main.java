import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor  = new Scanner(System.in);

        System.out.print("Informe um valor: ");
        int valor = leitor.nextInt();
        double fatorial = 1;

        for (int i = 1; i <= valor; i++) {
            fatorial *= i;
        }

        System.out.println("Fatorial do valor: " + fatorial);
    }
}