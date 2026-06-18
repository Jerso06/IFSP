import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.print("Digite o seu nome: ");
        String nome = leitor.nextLine();

        System.out.print("Seja bem vindo, " + nome);
    }
}