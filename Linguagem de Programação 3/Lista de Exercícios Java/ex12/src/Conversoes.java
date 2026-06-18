public class Conversoes {
    public static void main(String[] args) {
        String txt1 = String.valueOf(25);
        String txt2 = Double.toString(1.75);

        System.out.println(txt1 + 1);
        System.out.println(txt2 + 1);

        int i = Integer.valueOf("7");
        double d = Double.valueOf("3.14");

        System.out.println(i + 2);
        System.out.println(d + 1.0);
    }
}
