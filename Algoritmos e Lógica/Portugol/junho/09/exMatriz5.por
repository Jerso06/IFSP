programa
{
	
	funcao inicio()
	{
		inteiro matrizA[4][4], matrizB[4][4], matrizC[4][4],  cont=1

		para(inteiro i=0;i<4;i++){
			para(inteiro j=0;j<4;j++){
				escreva("Informe o ", cont, " valor da matriz A: ")
				leia(matrizA[i][j])
				enquanto(matrizA[i][j]%3!=0){
					escreva("Informe um valor divisivel por 3: ")
					leia(matrizA[i][j])
				}
				cont++
			}
		}
		
		cont=1
		escreva("\n\n")

		para(inteiro i=0;i<4;i++){
			para(inteiro j=0;j<4;j++){
				escreva("Informe o ", cont, " valor da matriz B: ")
				leia(matrizB[i][j])
				enquanto(matrizB[i][j]%4!=0){
					escreva("Informe um valor divisivel por 4: ")
					leia(matrizB[i][j])
				}
				cont++
			}
		}

		para(inteiro i=0;i<4;i++){
			para(inteiro j=0;j<4;j++){
				matrizC[i][j] = matrizA[i][j]+matrizB[i][j]
			}
		}

		escreva("\n\nMatriz C: \n")
		para(inteiro i=0;i<4;i++){
			para(inteiro j=0;j<4;j++){
				escreva("[",matrizC[i][j], "], ")
			}
			escreva("\n\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 816; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */