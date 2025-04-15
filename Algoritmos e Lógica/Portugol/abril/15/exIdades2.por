programa
{
	
	funcao inicio()
	{
		inteiro idade=1, contMenor=0, contMaior=0
		
		enquanto(idade>0){
			escreva("Informe uma idade: ")
			leia(idade)
			se(idade>50){
				contMaior++
			}senao se(idade<21 e idade!=0){
				contMenor++
			}
		}
		escreva("Quantidade de menores de 21: ",contMenor, "\nQuantidade de maiores de 50: ", contMaior)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 220; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */