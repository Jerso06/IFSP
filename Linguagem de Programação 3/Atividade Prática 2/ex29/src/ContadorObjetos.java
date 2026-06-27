public class ContadorObjetos {

    private static int totalObjetos = 0;

    public ContadorObjetos() {
        totalObjetos++;
    }

    public static int getTotalObjetos() {
        return totalObjetos;
    }
}