public class ManipulaString {
    public static void main(String[] args) {
        String mensagem = "Linguagem Java";
        int tamanho = mensagem.length();
        char primeiroCaracter = mensagem.charAt(0);
        char ultimoCaracter = mensagem.charAt(tamanho-1);
        String primeiraPalavra = mensagem.substring(0, mensagem.indexOf(" "));
        String concat = mensagem + " - Exercício";

        System.out.println("Tamanho = " + tamanho);
        System.out.println("Primeiro Caracter = " + primeiroCaracter);
        System.out.println("Último Caracter = " + ultimoCaracter);
        System.out.println("Primeira Palavra = " + primeiraPalavra);
        System.out.println("String Concatenada = " + concat);

        String txt1 = new String("Hello World");
        String txt2 = new String("Hello World");
        System.out.println(txt1 == txt2); //false
        System.out.println(txt1.equals(txt2)); //true
        /*
        * O == compara o endereço dos objetos, então por ter usado o new, criamos dois objetos
        * diferentes, fazendo com que as variáveis não apontem para o mesmo local.
        * Já o .equals() compara o valor de cada variável, que por serem iguais, retornará true
        */

    }
}
