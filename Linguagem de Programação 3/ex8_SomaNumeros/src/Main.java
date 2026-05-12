import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int soma = 0;

        System.out.print("Quantos números quer somar: ");
        int qtdNumeros = leitor.nextInt();

        int i = 1;
        while(i <= qtdNumeros){
            System.out.print("Valor " + i + ": ");
            soma += leitor.nextInt();
            i++;
        }

        System.out.println("Soma total: " + soma);
    }
}