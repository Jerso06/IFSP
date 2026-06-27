public class Tabuada {

    private int numero;

    public Tabuada(int numero) {
        this.numero = numero;
    }

    public void exibirTabuada() {
        System.out.println("Tabuada do " + numero + ":");

        for (int i = 1; i <= 10; i++) {
            System.out.println(numero + " x " + i + " = " + (numero * i));
        }
    }
}