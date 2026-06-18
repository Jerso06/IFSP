public class Main {
    public static void main(String[] args) {
        String text = String.valueOf(12);

        System.out.println(text + 1); //121 por estar concatenando com a string

        int i = Integer.parseInt(text);
        double d = Double.parseDouble(text);

        System.out.println(i+1); //somar por agirem como números
        System.out.println(d+1);
    }
}
