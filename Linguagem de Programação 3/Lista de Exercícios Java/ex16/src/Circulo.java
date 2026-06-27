public class Circulo {
    private int centrox;
    private int centroy;
    private int raio;
    public static final double PI = 3.14;

    public Circulo(int x, int y, int r){
        centrox = x;
        centroy = y;
        raio = r;
    }

    public Circulo(){
        centrox = 0;
        centroy = 0;
        raio = 1;
    }

    public double area(){
        return Math.pow(raio, 2) * PI;
    }

    public double circunferencia(){
        return 2*PI*raio;
    }

    public int diametro(){
        return raio*2;
    }
}
