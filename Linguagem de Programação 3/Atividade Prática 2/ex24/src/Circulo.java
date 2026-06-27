public class Circulo {
    private double centroX;
    private double centroY;
    private double raio;

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
        return Math.PI * raio * raio;
    }

    public double circunferencia() {
        return 2 * Math.PI * raio;
    }

    public double diametro() {
        return 2 * raio;
    }
}