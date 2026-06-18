public class TesteLampada {
    public static void main(String[] args){
        Lampada lamp = new Lampada();
        lamp.setWatts(100);
        lamp.ligar();

        System.out.println("Estado: " + lamp.getLigado() + "\nWatts: " + lamp.getWatts());

        lamp.desligar();
        lamp.setWatts(200);

        System.out.println("Estado: " + lamp.getLigado() + "\nWatts: " + lamp.getWatts());

    }
}
