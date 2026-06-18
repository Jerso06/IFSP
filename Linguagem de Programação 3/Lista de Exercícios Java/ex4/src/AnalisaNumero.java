public class AnalisaNumero {
    public static void main(String[] args) {

        int valor = 0;

        if(valor % 2 == 0){
            System.out.println("Número par.");
        }else{
            System.out.println("Número impar");
        }

        if(valor > 0){
            System.out.println("Positivo.");
        } else if (valor < 0) {
            System.out.println("Negativo.");
        }else{
            System.out.println("Valor é 0");
        }
    }
}
