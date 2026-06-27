public class Main {
    public static void main(String[] args) {
        Circulo circulo = new Circulo();

        circulo.setCentroX(0);
        circulo.setCentroY(0);
        circulo.setRaio(5);

        System.out.println("Centro: (" + circulo.getCentroX() + ", " + circulo.getCentroY() + ")");
        System.out.println("Raio: " + circulo.getRaio());
        System.out.println("Área: " + circulo.area());
        System.out.println("Circunferência: " + circulo.circunferencia());
        System.out.println("Diâmetro: " + circulo.diametro());
    }
}