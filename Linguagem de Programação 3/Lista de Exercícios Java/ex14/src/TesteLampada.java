public class TesteLampada {
    public static void main(String[] args){
        Lampada l = new Lampada();

        l.ligar();
        l.setPotencia(100);
        System.out.println("Ligada: " + l.isLigada());
        System.out.println("Potencia: " + l.getPotencia());

        l.desligar();

        System.out.println("Ligada: " + l.isLigada());
        
        /*
        * Atributos devem ser private para impedir que o usuário os acesse indevidamente
        * impedindo que o valor seja alterado de maneira indevida. Então o private impede
        * essas ações, garantindo mais confiabilidade nos dados.*/
    }
}
