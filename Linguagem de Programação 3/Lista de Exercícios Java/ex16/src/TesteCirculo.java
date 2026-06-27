public class TesteCirculo {
    public static void main(String[] args){
        Circulo c1 = new Circulo();
        Circulo c2 = new Circulo(2, 3, 2);

        //c1
        System.out.println("Área: " + c1.area());
        System.out.println("Circunferência: " + c1.circunferencia());
        System.out.println("Diametro: " + c1.diametro());

        //c2
        System.out.println("Área: " + c2.area());
        System.out.println("Circunferência: " + c2.circunferencia());
        System.out.println("Diametro: " + c2.diametro());
    }
}
