import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int cont = 0;
        int soma = 0;
        int valor = 0;

        while(valor != -1){
            System.out.print("Informe um valor: ");
            valor = leitor.nextInt();

            if(valor != -1){
                soma += valor;
                cont++;
            }
        }

        System.out.println("Média: " + (soma/cont));
    }
}