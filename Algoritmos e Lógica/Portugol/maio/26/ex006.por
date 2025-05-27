programa
{
	
	funcao inicio()
	{
		cadeia plantas[5], coisas[] = {"Vaso", "Sementes", "Arranjos"}
		inteiro quantidades[5][3]

		para(inteiro i=0;i<5;i++){
			escreva("Informe a ", i+1, " planta: ")
			leia(plantas[i])
		}

		para(inteiro i=0;i<5;i++){
			para(inteiro j=0;j<3;j++){
				escreva("Informe a quantidade de ",coisas[j]," da planta ",plantas[i],": ")
				leia(quantidades[i][j])
			}
		}

		para(inteiro i=0;i<5;i++){
			para(inteiro j=0;j<3;j++){
				se(quantidades[i][j]<2){
					quantidades[i][j] = 20 - quantidades[i][j]
				}
			}
		}
		
		escreva("\n        Vasos    Sementes    Arranjos\n")

		para(inteiro i=0;i<5;i++){
			escreva(plantas[i])
			para(inteiro j=0;j<3;j++){
				escreva("    [",quantidades[i][j],"]    ")
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
 * @POSICAO-CURSOR = 577; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */