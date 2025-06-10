programa
{
	inclua biblioteca Util --> ut
	
	funcao inicio()
	{
		inteiro vetor[10], maior = 0

		escreva("Vetor gerado: ")
		para(inteiro i=0;i<10;i++){
			vetor[i] = ut.sorteia(0, 100)
			escreva(vetor[i], ", ")
		}
		maior = defineMaior(vetor)
		escreva("\nMaior valor: ",maior)
	}

	funcao inteiro defineMaior(inteiro vetor[]){
		inteiro maior  = 0
		para(inteiro i=0;i<10;i++){
			se(i==0){
				maior = vetor[i]
			}senao se(vetor[i]>maior){
				maior = vetor[i]
			}
		}
		retorne maior
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 99; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */