public class Main {
    public static void main(String[] args) {
        final int taxa = 10;
        double compra = 234.56;

        System.out.println("Valor final com desconto = " + (compra - (compra * taxa)/100));
    }
}
