programa
{
	
	funcao inicio()
	{
		inteiro qtdValor=0, valor=1, soma=0
		
		enquanto(valor>0){
			escreva("Informe um valor: ")
			leia(valor)
			se(valor>0){
				qtdValor++
				soma+=valor	
			}
		}
		escreva("\nQuantidade de valores digitados: ", qtdValor)
		escreva("\nMédia dos valores: ",soma/qtdValor)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 160; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */