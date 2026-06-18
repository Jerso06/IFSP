public class SomaDigitos {
    public static void main(String[] args) {
        int numero = 99999;
        int numeroBackup = numero;
        int soma = 0;

        while(numero != 0){
            soma += numero % 10;
            numero /= 10;
        }

        System.out.println("Soma dos digitos de " + numeroBackup + " = " + soma);
    }
}
