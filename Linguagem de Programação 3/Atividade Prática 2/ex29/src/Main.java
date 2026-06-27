public class Main {
    public static void main(String[] args) {

        ContadorObjetos o1 = new ContadorObjetos();
        ContadorObjetos o2 = new ContadorObjetos();
        ContadorObjetos o3 = new ContadorObjetos();

        System.out.println("Total de objetos criados: " + ContadorObjetos.getTotalObjetos());
    }
}