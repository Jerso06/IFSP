programa
{
	
	funcao inicio()
	{
		inteiro valor=1, contadorDivisor=0, contador=1

		enquanto(valor>0){
			escreva("\nInforme um valor: ")
			leia(valor)
			se(valor>0){
			enquanto(contador<=valor){
				se(valor%contador==0){
					contadorDivisor++
				}
				contador++
				}
				se(contadorDivisor==2){
					escreva("O valor é primo")
				}senao{
					escreva("O valor não é primo")
				}
				contador=1
				contadorDivisor=0	
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 281; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */