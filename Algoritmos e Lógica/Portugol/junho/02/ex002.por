programa
{
	
	funcao inicio()
	{
		inteiro numero
		
		escreva("Informe um numero: ")
		leia(numero)
		tabuada(numero)
	}

	funcao tabuada(inteiro valor){
		para(inteiro i=0;i<11;i++){
			escreva(valor, "X", i, " = ",valor*i)
			escreva("\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 249; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */