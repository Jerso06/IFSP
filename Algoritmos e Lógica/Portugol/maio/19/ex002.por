programa
{
	
	funcao inicio()
	{
		inteiro idades[5]
		real alturas[5]

		para(inteiro i=0; i<5; i++){
			escreva("Informe a sua idade: ")
			leia(idades[i])
			escreva("Informe a sua altura: ")
			leia(alturas[i])
		}

		escreva("Lista invertida: \n")
		para(inteiro i=4;i>=0;i--){
			escreva("Idade: ",idades[i],"  Altura: ",alturas[i], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 287; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */