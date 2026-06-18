public class Main {
    public static void main(String[] args) {
        String txt1 = "Hello World!";
        String txt2 = "Hello World!";

        System.out.println(txt1 == txt2); //true
        System.out.println(txt1.equals(txt2)); //true

        String txt3 = new String("Hello World!");
        String txt4 = new String("Hello World!");

        System.out.println(txt3 == txt4); //false
        System.out.println(txt3.equals(txt4)); // true
    }
}
