import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("Pratos do cardápio: \n1 - Filé de frango a parmegiana " +
                "\n2 - Tilápia frita \n3 - Omelete com bacon");
        System.out.print("Opção: ");

        int item = leitor.nextInt();

        switch(item){
            case 1:
                System.out.println("Filé de frango a parmegiana selecionado.");
                break;
            case 2:
                System.out.println("Tilápia frita selecionada.");
                break;
            case 3:
                System.out.println("Omelete com bacon selecionado.");
                break;
            default:
                System.out.println("Item inválido.");
                break;
        }
    }
}