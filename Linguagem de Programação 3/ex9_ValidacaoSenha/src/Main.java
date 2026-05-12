import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.print("Informe a senha: ");
        String senha = leitor.nextLine();

        while(!senha.equals("1234")){
            System.out.print("Informe a senha correta: ");
            senha = leitor.nextLine();
        }

        System.out.println("Senha correta informada");
    }
}