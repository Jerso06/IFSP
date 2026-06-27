public class TesteCalculadoraGeometrica {
    public static void main(String[] args){
        CalculadoraGeometrica cg = new CalculadoraGeometrica();

        System.out.println("Área quadrado lado 2: " + cg.area(2));
        System.out.println("Área retângulo de base 3 e altura 2: " + cg.area(3, 2));
        System.out.println("Área circulo raio 2: " + cg.area(2.0));

        /*Não é valida pois para diferenciar na sobrecarga é preciso ter uma quantidade
        ou ordem de parâmetros diferente, porém nesse caso são os mesmos, então não
        funcionará.
        */
    }
}
