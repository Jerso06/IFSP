programa
{
	
	funcao inicio()
	{
		inteiro n1, n2, n3
		
		escreva("Informe o primeiro valor: ")
		leia(n1)
		escreva("Informe o segundo valor: ")
		leia(n2)
		escreva("Informe o terceiro valor: ")
		leia(n3)
		se(n1>=n2 e n1>=n3){
			escreva("O maior valor foi: ",n1)
		}senao se(n2>=n1 e n2>=n3){
			escreva("O maior valor foi: ",n2)
		}senao se(n3>=n1 e n3>=n2){
			escreva("O maior valor foi: ",n3)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 416; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */