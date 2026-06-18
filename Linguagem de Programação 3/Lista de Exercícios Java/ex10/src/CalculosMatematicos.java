public class CalculosMatematicos {
    public static void main(String[] args) {

        double area = 30.0;
        double raio = Math.sqrt(area / Math.PI);
        System.out.println("Raio = " + raio);

        double cateto1 = 3;
        double cateto2 = 4;
        double hipotenusa = Math.sqrt(Math.pow(cateto1, 2) + Math.pow(cateto2, 2));
        System.out.println("Hipotenusa = " + hipotenusa);

        int negativo = -9;
        System.out.println("Valor absoluto de " + negativo + " é " + Math.abs(negativo));
    }
}
