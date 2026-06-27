public class TesteContaBancaria {
    public static void main(String[] args){
        ContaBancaria conta1 = new ContaBancaria(123, 1500);
        ContaBancaria conta2 = new ContaBancaria(456, 2000);
        ContaBancaria conta3 = new ContaBancaria(789, 7000);

        conta1.sacar(1600); //erro
        conta1.depositar(100);

        conta2.depositar(2);
        conta2.sacar(500);

        conta3.sacar(6000);

        System.out.println("Total de contas: " + ContaBancaria.getTotalContas());
    }
}
