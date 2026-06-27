public class Main {
    public static void main(String[] args) {
        Circulo c1 = new Circulo();
        System.out.println("Círculo 1:");
        System.out.println("Centro: (" + c1.getCentroX() + ", " + c1.getCentroY() + ")");
        System.out.println("Raio: " + c1.getRaio());
        System.out.println("Área: " + c1.area());

        System.out.println();

        Circulo c2 = new Circulo(3, 4, 5);
        System.out.println("Círculo 2:");
        System.out.println("Centro: (" + c2.getCentroX() + ", " + c2.getCentroY() + ")");
        System.out.println("Raio: " + c2.getRaio());
        System.out.println("Circunferência: " + c2.circunferencia());
    }
}