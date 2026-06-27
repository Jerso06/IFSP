public class VerificaEscopo {
    private int escopoA;
    public void metodo(int escopoB) {
        int escopoC; //vriável não estava inicializada
        System.out.println(escopoA);
        System.out.println(escopoB);
        //System.out.println(escopoC); //antes a variável não tinha valor
        for (int i = 1; i < 5; i++) {
            int j = i * 2;
        }
        //System.out.println(i); //lugar errado antes, fora do corpo do for
        //System.out.println(j); //lugar errado antes, fora do corpo do for
    }
}