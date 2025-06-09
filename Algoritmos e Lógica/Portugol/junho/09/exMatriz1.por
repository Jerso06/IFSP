programa
{
	
	funcao inicio()
	{
		inteiro matrizA[3][3], matrizB[3][3], cont=1

		 para(inteiro i=0;i<3;i++){
		 	para(inteiro j=0;j<3;j++){
		 		escreva("Informe o ",cont," valor: ")
		 		leia(matrizA[i][j])
		 		cont++
		 	}
		 }

		 para(inteiro i=0;i<3;i++){
		 	para(inteiro j=0;j<3;j++){
		 		matrizB[j][i] = matrizA[i][j]
		 	}
		 }

		 escreva("Matriz original: \n")
		 para(inteiro i=0;i<3;i++){
		 	para(inteiro j=0;j<3;j++){
		 		escreva("[",matrizA[i][j], "], ")
		 	}
		 	escreva("\n\n")
		 }

		 escreva("Matriz transposta: \n")
		 para(inteiro i=0;i<3;i++){
		 	para(inteiro j=0;j<3;j++){
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
 * @POSICAO-CURSOR = 469; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */