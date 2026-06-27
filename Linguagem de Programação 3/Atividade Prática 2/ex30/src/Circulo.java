public class Circulo {
    public static final double PI = 3.14159;
    private double centroX;
    private double centroY;
    private double raio;

    public Circulo() {
        this.centroX = 0;
        this.centroY = 0;
        this.raio = 1;
    }

    public Circulo(double centroX, double centroY, double raio) {
        this.centroX = centroX;
        this.centroY = centroY;
        this.raio = raio;
    }

    public double getCentroX() {
        return centroX;
    }

    public void setCentroX(double centroX) {
        this.centroX = centroX;
    }

    public double getCentroY() {
        return centroY;
    }

    public void setCentroY(double centroY) {
        this.centroY = centroY;
    }

    public double getRaio() {
        return raio;
    }

    public void setRaio(double raio) {
        this.raio = raio;
    }

    public double area() {
        return PI * raio * raio;
    }

    public double circunferencia() {
        return 2 * PI * raio;
    }

    public double diametro() {
        return 2 * raio;
    }
}