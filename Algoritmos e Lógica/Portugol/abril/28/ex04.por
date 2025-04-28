programa
{
	
	funcao inicio()
	{
		inteiro cont25=0, cont50=0, cont75=0, cont100=0, entrada=0

		enquanto(entrada>=0){
			escreva("\nInforme um valor: ")
			leia(entrada)
			se(entrada>=0 e entrada<=25){
				cont25++
			}senao se(entrada>=26 e entrada<=50){
				cont50++
			}senao se(entrada>=51 e entrada<=75){
				cont75++
			}senao se(entrada>=76 e entrada<=100){
				cont100++
			}
		}
		escreva("\nQuantidade no intervalo [0,25]: ", cont25)
		escreva("\nQuantidade no intervalo [26,50]: ", cont50)
		escreva("\nQuantidade no intervalo [51,75]: ", cont75)
		escreva("\nQuantidade no intervalo [76,100]: ", cont100)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 578; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */