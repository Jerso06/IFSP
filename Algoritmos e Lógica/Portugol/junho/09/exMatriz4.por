programa
{
	
	funcao inicio()
	{
		inteiro matrizA[6][6], matrizB[6][6], cont=1

		para(inteiro i=0;i<6;i++){
		 	para(inteiro j=0;j<6;j++){
		 		escreva("Informe o ", cont, " valor da matriz: ")
		 		leia(matrizA[i][j])
		 		se(i!=j){
		 			matrizB[i][j] = matrizA[i][j]+5
		 		}senao{
		 			matrizB[i][j] = matrizA[i][j]
		 		}
		 		cont++
		 	}
		}

		escreva("Matriz A: \n")
		para(inteiro i=0;i<6;i++){
		 	para(inteiro j=0;j<6;j++){
		 		escreva("[",matrizA[i][j], "], ")
		 	}
		 	escreva("\n\n")
		 }

		escreva("Matriz B: \n")
		para(inteiro i=0;i<6;i++){
		 	para(inteiro j=0;j<6;j++){
		 		escreva("[",matrizB[i][j], "], ")
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
 * @POSICAO-CURSOR = 322; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */