programa
{
	inteiro vetor[10]
	
	funcao inicio()
	{
		inteiro valor, cont
		para(inteiro i=0;i<10;i++){
			escreva("Informe o ", i+1, " valor: ")
			leia(vetor[i])
			escreva("\n")
		}
		
		escreva("Informe um valor: ")
		leia(valor)
		cont = contador(valor)
		escreva("O valor informado aparece ", cont, " vezes no vetor.")
	}

	funcao inteiro contador(inteiro numero){
		inteiro cont=0
		para(inteiro i=0;i<10;i++){
			se(numero==vetor[i]){
				cont++
			}
		}
		retorne cont
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 335; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */