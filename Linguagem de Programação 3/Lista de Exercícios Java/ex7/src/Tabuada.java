public class Tabuada {
    public static void main(String[] args) {
        int soma = 0;
        int n = 12;

        for(int i = 0; i <= 10; i++){
            System.out.println(n + " x " + i + " = " + (n*i));
        }

        for(int i = 1; i <=n; i++){
            soma += i;
        }
        System.out.println("\nSoma de 1 até N = " + soma);
    }
}
