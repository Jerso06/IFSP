import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner leitor = new Scanner(System.in);

        System.out.print("Informe o primeiro valor: ");
        int n1 = leitor.nextInt();

        System.out.print("Informe o segundo valor: ");
        int n2 = leitor.nextInt();

        System.out.println("A soma resulta em: " + (n1 + n2));
    }
}
