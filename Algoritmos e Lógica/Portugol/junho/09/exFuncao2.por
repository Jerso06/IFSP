programa
{
	
	funcao inicio()
	{
		real n1, n2
		caracter calculo
		
		escreva("Informe o primeiro valor: ")
		leia(n1)
		escreva("Informe o segundo valor: ")
		leia(n2)
		escreva("Informe o simbolo do tipo de calculo que quer fazer (+,-,*,/): ")
		leia(calculo)
		calculadora(n1, n2, calculo)
	}

	funcao calculadora(real n1, real n2, caracter calculo){
		escolha(calculo){
			caso '+':
				escreva(n1,"+",n2,"=",n1+n2)
				pare
			caso '-':
				escreva(n1,"-",n2,"=",n1-n2)
				pare
			caso '*':
				escreva(n1,"*",n2,"=",n1*n2)
				pare
			caso '/':
				escreva(n1,"/",n2,"=",n1/n2)
				pare
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 338; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */