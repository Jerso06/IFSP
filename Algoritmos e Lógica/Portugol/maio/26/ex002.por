programa
{
	
	funcao inicio()
	{
		inteiro matriz[5][5]

		para(inteiro i=0;i<5;i++){
			para(inteiro j=0;j<5;j++){
				escreva("informe o ",j+1, " valor da ",i+1, " linha: ")
				leia(matriz[i][j])
			}
		}

		escreva("Matriz apenas com os valores da diagonal principal: \n")
		para(inteiro i=0;i<5;i++){
			para(inteiro j=0;j<5;j++){
				se(i==j){
					escreva(matriz[i][j], ",")	
				}senao{
					escreva(" ", ",")
				}
			}
			escreva("\n")
		}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 392; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */