public class Main {
    public static void main(String[] args){
        Circulo c = new Circulo(0, 0, 5);

        System.out.println("PI: " + Circulo.PI);
        System.out.println("Área: " + c.area());
        System.out.println("Circunferência: " + c.circunferencia());
        System.out.println("Diâmetro: " + c.diametro());
    }
}
