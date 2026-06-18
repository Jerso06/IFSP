public class ControleLacos {
    public static void main(String[] args) {
        int cont = 10;
        int soma = 0;
        int index = 0;
        do{
            System.out.println(cont--);
        }while(cont >= 0);

        for(int i = 1; i <= 100; i ++){
            if(i % 2 == 1) {
                if (i % 5 == 0) {
                    continue;
                } else {
                    soma += i;
                }
            }

            if(soma > 500){
                index = i;
                break;
            }
        }

        System.out.println("A soma deu " + soma + " e foi ultrapassada no número " + index);
    }
}
