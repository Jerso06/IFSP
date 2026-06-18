public class TesteOperadores {
    public static void main(String[] args) {
        /*
        * No primeiro System... vai mostrar 5
        * no segundo mostrará 7
        * no terceiro mostrará 10
        * no quarto mostrará 20
        * no quinto mostrará 0
        */

        int x = 5;
        System.out.println(x++);
        System.out.println(++x);
        x += 3;
        System.out.println(x);
        x *= 2;
        System.out.println(x);
        x %= 5;
        System.out.println(x);
    }
}
