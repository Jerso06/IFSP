public class Main {
    public static void main(String[] args) {
        String mensagem = "Mensagem Aleatória";

        System.out.println("Tamanho = " + mensagem.length());
        System.out.println("Primeiro caracter = " + mensagem.charAt(0));
        System.out.println("Último caracter = " + mensagem.charAt(mensagem.length() - 1));

        String meio = mensagem.substring(3, 8);
        System.out.println("Texto aleatório pelo meio = " + meio);
    }
}
