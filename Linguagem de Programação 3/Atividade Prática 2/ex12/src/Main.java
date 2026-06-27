public class Main {
    public static void main(String[] args) {
        enum Conceitos {A, B, C, D, E}

        Conceitos desempenho = Conceitos.C;

        switch (desempenho){
            case A:
                System.out.println("Desempenho excelente");
                break;
            case B:
                System.out.println("Desempenho ótimo");
                break;
            case C:
                System.out.println("Desempenho bom");
                break;
            case D:
                System.out.println("Desempenho regular");
                break;
            case E:
                System.out.println("Desempenho insuficiente");
                break;
        }
    }
}