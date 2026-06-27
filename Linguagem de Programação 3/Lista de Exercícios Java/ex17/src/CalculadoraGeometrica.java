public class CalculadoraGeometrica {

    public int area(int lado){
        return lado*lado;
    }

    public int area(int base, int altura){
        return base*altura;
    }

    public double area(double raio){
        return Math.PI * Math.pow(raio, 2);
    }
}
