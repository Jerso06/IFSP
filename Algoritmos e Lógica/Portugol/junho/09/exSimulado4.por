programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real vetorA[10], vetorB[10], valor=1.0
		inteiro cont=0

		enquanto(valor>0 e cont<10){
			escreva("Informe o ",cont+1," valor: ")
			leia(valor)
			se(valor>0){
				vetorA[cont]= valor
				vetorB[cont]= mat.arredondar(1/valor, 4)
				cont++
			}
		}

		escreva("Vetor A: ")
		para(inteiro i=0;i<cont;i++){
			escreva(vetorA[i], ", ")
		}
		
		escreva("\nVetor B: ")
		para(inteiro i=0;i<cont;i++){
			escreva(vetorB[i], ", ")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 248; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */