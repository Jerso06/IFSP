programa
{
	
	funcao inicio()
	{
		caracter letras[10]

		para(inteiro i=0;i<10;i++){
			escreva("Informe a ",i+1," letra: ")
			leia(letras[i])
		}

		escreva("Letras invertidas: ")
		para(inteiro i=9;i>=0;i--){
			se(i!=0){
				escreva(letras[i],", ")
			}senao{
				escreva(letras[i])	
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