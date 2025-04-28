programa
{
	
	funcao inicio()
	{
		inteiro valor=1, contPar=0, contImpar=0, contGeral=0
		real mediaGeral, mediaPar, somaGeral=0, somaPar=0

		faca{
			escreva("Informe um valor: ")
			leia(valor)
			se(valor!=0){
				somaGeral+=valor
				contGeral++
				se(valor%2==0){
					contPar++
					somaPar+=valor
				}senao{
					contImpar++
				}	
			}
		}enquanto(valor!=0)

		mediaPar = somaPar/contPar
		mediaGeral = somaGeral/contGeral
		escreva("\nQuantidade de valores pares: ",contPar)
		escreva("\nQuantidade de valores impares: ",contImpar)
		escreva("\nMédia de pares: ", mediaPar)
		escreva("\nMédia geral: ", mediaGeral)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 626; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */