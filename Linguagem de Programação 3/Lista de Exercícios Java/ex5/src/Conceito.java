public class Conceito {
    public static void main(String[] args) {
        double nota = 6.7;

        if(nota > 10 || nota < 0){
            System.out.println("Nota inválida");
        }else{
            if(nota >= 9.0){
                System.out.println("Conceito A");
            }else if(nota >= 8.0){
                System.out.println("Conceito B");
            }else if(nota >= 7.0){
                System.out.println("Conceito C");
            }else if(nota >= 6.0){
                System.out.println("Conceito D");
            }else {
                System.out.println("Conceito F (Reprovado)");
            }
        }
    }
}
