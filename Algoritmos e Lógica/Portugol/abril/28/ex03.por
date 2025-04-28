programa
{
	
	funcao inicio()
	{
		inteiro valor, multiplicador=1
		
		escreva("Informe um valor: ")
		leia(valor)
		para(inteiro i=1;i<=valor;i++){
			multiplicador = multiplicador*i
		}
		escreva("Fatorial do valor ", valor, " é: ", multiplicador)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 255; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */