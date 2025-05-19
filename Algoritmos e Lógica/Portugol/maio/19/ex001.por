programa
{
	
	funcao inicio()
	{
		caracter valor[10]

		para(inteiro i=0; i<10; i++){
			escreva("Informe o ",i+1," caracter: ")
			leia(valor[i])
		}

		escreva("Caracteres: ")
		para(inteiro i=0;i<10;i++){
			se(i!=9){
				escreva(valor[i],", ")
			}senao{
				escreva(valor[i])
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 291; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */