programa
{
	
	funcao inicio()
	{
		inteiro prontuario = 0
		real n1, n2, n3, media, maior=0.0, menor1=0.0, menor2=0.0

		enquanto(prontuario>=0){
			escreva("\nInforme o prontuário do aluno: ")
			leia(prontuario)
			se(prontuario>=0){
				escreva("Informe a primeira nota: ")
			leia(n1)
				escreva("Informe a segunda nota: ")
				leia(n2)
				escreva("Informe a terceira nota: ")
				leia(n3)
				se(n1>n2 e n1>n3){
					maior = n1
					menor1 = n2
					menor2 = n3
				}senao se(n2>n1 e n2>n3){
					maior = n2
					menor1 = n1
					menor2 = n3
				}senao{
					maior = n3
					menor1 = n1
					menor2 = n2
				}
				media = ((maior*4)+(menor1*3)+(menor2*3))/10
				escreva("\nAluno com prontuário ", prontuario)
				escreva("\nNota 1: ", n1, "\nNota 2: ", n2, "\nNota 3: ", n3)
				escreva("\nMédia: ", media)
				se(media>=6){
					escreva("\nAPROVADO!\n")
				}senao{
					escreva("\nREPROVADO!\n")
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 916; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */