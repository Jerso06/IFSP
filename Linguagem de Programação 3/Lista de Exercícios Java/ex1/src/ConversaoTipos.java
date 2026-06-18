public class ConversaoTipos {
    public static void main(String[] args) {
        int x = 100;
        long y = x;
        System.out.println("Valor da variável long: " + y);

        long a = 130;
        int b = (int)a;
        byte c = (byte)a;
        System.out.println("Valor da variável int: " + b);
        System.out.println("Valor da variável byte: " + c);

        byte b1 = 100;
        byte b2 = 100;
        byte b3 = (byte)(b1+b2);
        System.out.println("Valor da variável byte: " + b3);

        /* O valor é negativo pois a soma de dois byte 100 resulta em int 200, o que
        quando feito casting pra byte, excede o limite que o byte pode armazenar (-128 até 127),
        o que faz com que o sistema faça um cálculo para saber em qual posição do
        intervalo o valor resultante estaria, que nesse caso seria o -56, pois a conta
        seria 256 - valor = x, ai por exceder pro lado dos positivos, o resultado virará
        negativo, mesmo que na conta não dê negativo, se exceder pelo lado negativo
        o valor final será positivo. 256 - 200 = -56 */

    }
}
