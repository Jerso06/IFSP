import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("===== MENU =====");
        System.out.println("1 - Cadastrar");
        System.out.println("2 - Listar");
        System.out.println("3 - Alterar");
        System.out.println("4 - Sair");
        System.out.print("Escolha uma opção: ");

        int opcao = scanner.nextInt();

        switch (opcao) {
            case 1:
                System.out.println("Opção escolhida: Cadastrar.");
                break;

            case 2:
                System.out.println("Opção escolhida: Listar.");
                break;

            case 3:
                System.out.println("Opção escolhida: Alterar.");
                break;

            case 4:
                System.out.println("Encerrando o programa...");
                break;

            default:
                System.out.println("Opção inválida!");
        }

    }
}