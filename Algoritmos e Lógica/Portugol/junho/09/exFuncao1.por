programa
{
	
	funcao inicio()
	{
		inteiro vetor[5]

		para(inteiro i=0;i<5;i++){
			escreva("Informe o ",i+1, " valor: ")
			leia(vetor[i])
		}
		verifica(vetor)
	}

	funcao verifica(inteiro vetor[]){
		escreva("\n\n")
		para(inteiro i=0;i<5;i++){
			se(vetor[i]>0){
				escreva("O ",vetor[i]," é positivo!\n")
			}senao se(vetor[i]<0){
				escreva("O ",vetor[i]," é negativo!\n")
			}senao{
				escreva("O ",vetor[i]," é zero\n")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 299; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */