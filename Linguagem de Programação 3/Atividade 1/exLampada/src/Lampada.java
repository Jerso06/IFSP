public class Lampada {
    private boolean ligado;
    private int watts;

    public void ligar(){
        this.ligado = true;
    }

    public void desligar(){
        this.ligado = false;
    }

    public void setWatts(int watts){
        this.watts = watts;
    }

    public int getWatts(){
        return this.watts;
    }

    public boolean getLigado(){
        return this.ligado;
    }
}
