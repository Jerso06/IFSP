public class Main {
    public static void main(String[] args) {

        Calculadora calc = new Calculadora();

        System.out.println("Soma int (2): " + calc.somar(5, 10));
        System.out.println("Soma double: " + calc.somar(2.5, 3.7));
        System.out.println("Soma int (3): " + calc.somar(1, 2, 3));
    }
}