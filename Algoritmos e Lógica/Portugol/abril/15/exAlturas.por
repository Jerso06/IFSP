programa
{
	
	funcao inicio()
	{
		real altura = 1, soma = 0
		inteiro contador = 0, contadorMaior = 0

		enquanto(altura>0){
		escreva("Informe a altura do atleta: ")
		leia(altura)
		soma+=altura
		se(altura!=0){
			contador++
			se(altura>1.5){
				contadorMaior++
				}
			}
		}
		escreva("Média: ",soma/contador)
		escreva("\nMaiores de 1.5m: ", contadorMaior)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 325; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */