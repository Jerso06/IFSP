programa
{
	inclua biblioteca Matematica --> Mat
	
	funcao inicio()
	{
		real valorProduto,valorTotal
		inteiro unidades, resto

		escreva("Informe o valor do produto: ")
		leia(valorProduto)
		escreva("Informe a quantidade comprada: ")
		leia(unidades)
		resto = unidades%3
		valorTotal = Mat.arredondar((valorProduto-0.3)*(unidades-resto)+valorProduto*resto, 2)
		escreva("Valor total a pagar: ", valorTotal)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 327; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */