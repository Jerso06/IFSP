import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.print("Informe uma nota: ");
        double nota = leitor.nextDouble();

        if(nota >= 7){
            System.out.println("Aprovado");
        }else if(nota < 5){
            System.out.println("Reprovado");
        }else{
            System.out.println("Recuperação");
        }
    }
}