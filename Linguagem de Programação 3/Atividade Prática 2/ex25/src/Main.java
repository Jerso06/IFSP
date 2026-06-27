public class Main {
    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria();

        conta.setTitular("João");

        conta.depositar(1000.00);
        conta.consultarSaldo();

        conta.sacar(250.00);
        conta.consultarSaldo();

        System.out.println("Titular: " + conta.getTitular());
    }
}