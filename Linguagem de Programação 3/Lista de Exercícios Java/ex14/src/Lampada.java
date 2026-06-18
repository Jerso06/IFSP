public class Lampada {
    private boolean ligada;
    private int potencia;

    public void ligar(){
        this.ligada = true;
    }

    public void desligar(){
        this.ligada = false;
    }

    public boolean isLigada(){
        if(this.ligada){
            return true;
        }else{
            return false;
        }
    }

    public void setPotencia(int p){
        this.potencia = p;
    }

    public int getPotencia(){
        return this.potencia;
    }
}
