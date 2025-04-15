programa
{
	
	funcao inicio()
	{
		real raio, altura, volumeTotal, volumeFinal, volumeParcial

		escreva("Informe o raio da lata: ")
		leia(raio)
		escreva("Informe a altura da lata: ")
		leia(altura)

		volumeTotal = 3.14159*(raio*raio)*altura
		volumeParcial = volumeTotal/3
		volumeFinal = volumeTotal-volumeParcial

		 escreva("Volume que ainda sobra na lata: ", volumeFinal)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 230; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */