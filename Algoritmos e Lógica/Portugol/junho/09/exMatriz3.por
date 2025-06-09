programa
{
	inclua biblioteca Util --> ut
	
	funcao inicio()
	{
		inteiro matriz[4][4], soma=0

		para(inteiro i=0;i<4;i++){
		 	para(inteiro j=0;j<4;j++){
		 		matriz[i][j] = ut.sorteia(0, 50)
		 	}
		}

		escreva("Matriz gerada: \n")
		para(inteiro i=0;i<4;i++){
		 	para(inteiro j=0;j<4;j++){
		 		escreva("[",matriz[i][j], "], ")
		 		se(i+j==4-1){
		 			soma+=matriz[i][j]
		 		}
		 	}
		 	escreva("\n\n")
		 }

		 escreva("Soma da diagonal secundaria: ", soma)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 283; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */