public class ContaBancaria {
    private int numero;
    private double saldo;
    private static int totalContas;

    public ContaBancaria(int n, double s){
        numero = n;
        saldo = s;
        totalContas++;
    }

    public ContaBancaria(){
        numero = 0;
        saldo = 0;
        totalContas++;
    }

    public void depositar(double valor){
        saldo += valor;
    }

    public void sacar(double valor){
        if(saldo - valor < 0){
            System.out.println("Saldo indisponível!");
        }else{
            saldo -= valor;
        }
    }

    public static int getTotalContas(){
        return totalContas;
    }
}
