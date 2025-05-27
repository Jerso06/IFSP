programa
{
	
	funcao inicio()
	{
		inteiro matrizQuantidade[6][6]
		cadeia itens[] = {"Coxinha", "Joelho", "Pizza", "Agua", "Refrigerante", "Suco"}
		real precos[] = {4.5,5.5,6.0,3.0,4.5,5.5}, total[6]

		para(inteiro i=0;i<6;i++){
			para(inteiro j=0;j<6;j++){
				escreva("Informe quantas ",itens[j]," tem na mesa ",i+1,": ")
				leia(matrizQuantidade[j][i])
				total[i]+=matrizQuantidade[j][i]*precos[j]
			}
		}

		para(inteiro i=0;i<6;i++){
			escreva("\nValor total da mesa ",i+1,": R$",total[i])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 507; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */