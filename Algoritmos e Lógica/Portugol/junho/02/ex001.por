programa
{
	
	funcao inicio()
	{
		real numero
		
		escreva("Informe um valor: ")
		leia(numero)
		numero = funcDobro(numero)
		escreva("Valor dobrado: ", numero)
	}

	funcao real funcDobro (real valor){
		retorne valor*2
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 167; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */