import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.print("Digite a Temperatura em Celsius: ");
        double temperaturaC =  leitor.nextInt();
        double temperaturaF = (temperaturaC * 9/5) + 32;

        System.out.println("Temperatura em Fahrenheit: " + temperaturaF);
    }
}