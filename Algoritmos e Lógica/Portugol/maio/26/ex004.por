programa
{
	inclua biblioteca Util--> ut
	
	funcao inicio()
	{
		inteiro MA[3][2], MB[3][2], MC[6][2], cont=0

		para(inteiro i=0;i<3;i++){
			para(inteiro j=0;j<2;j++){
				MA[i][j] = ut.sorteia(0, 100)
				MB[i][j] = ut.sorteia(0, 100)
			}
		}

		//atribuir coluna de A
		para(inteiro i=0;i<3;i++){
			para(inteiro j=0;j<2;j++){
				MC[cont][0] = MA[i][j]*2
				cont++
			}
		}

		cont=0
		//atribuir coluna de B
		para(inteiro i=0;i<3;i++){
			para(inteiro j=0;j<2;j++){
				MC[cont][1] = MB[i][j]-5
				cont++
			}
		}

		escreva("Matriz A: \n")
		para(inteiro i=0;i<3;i++){
			para(inteiro j=0;j<2;j++){
				escreva("[",MA[i][j],"], ")
			}
			escreva("\n")
		}

		escreva("\n\nMatriz B: \n")
		para(inteiro i=0;i<3;i++){
			para(inteiro j=0;j<2;j++){
				escreva("[",MB[i][j],"], ")
			}
			escreva("\n")
		}

		escreva("\n\nMatriz final: \n")
		para(inteiro i=0;i<6;i++){
			para(inteiro j=0;j<2;j++){
				escreva("[",MC[i][j],"], ")
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
 * @POSICAO-CURSOR = 855; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */