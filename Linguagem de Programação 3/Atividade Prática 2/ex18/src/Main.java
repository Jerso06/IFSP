public class Main {
    public static void main(String[] args) {
        int n = 1;
        System.out.println("Números de 1 à 20:");
        while(n<=20){
            System.out.println("- " + n);
            n++;
        }

        n = 1;
        System.out.println("\nPares de 1 à 20:");
        while(n<=20){
            if(n % 2 == 0){
            System.out.println("- " + n);
            }
            n++;
        }
    }
}