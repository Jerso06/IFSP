import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor  = new Scanner(System.in);

        int maior = 0, menor = 0, valor;

        for(int i = 0; i < 5; i++){
            System.out.print("Informe um valor: ");
            valor = leitor.nextInt();

            if(i  == 0){
                maior = valor;
                menor = valor;
            }else if(valor > maior){
                maior = valor;
            }else if(valor < menor) {
                menor = valor;
            }
        }

        System.out.println("Maior valor: " + maior);
        System.out.println("Menor valor: " + menor);
    }
}