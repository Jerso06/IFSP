import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String resposta;

        do {
            System.out.println("Esta mensagem será exibida pelo menos uma vez.");
            System.out.print("Deseja repetir? (s/n): ");
            resposta = scanner.next();
        } while (resposta.equalsIgnoreCase("s"));
    }
}