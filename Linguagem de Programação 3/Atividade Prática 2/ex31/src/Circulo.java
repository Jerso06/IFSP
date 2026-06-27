public class Circulo {

    public static final double PI = 3.14159;

    private double centroX;
    private double centroY;
    private double raio;

    // Método estático
    public static String equacaoGeral(double centroX, double centroY, double raio) {
        return "(x - " + centroX + ")² + (y - " + centroY + ")² = " + (raio * raio);
    }
}