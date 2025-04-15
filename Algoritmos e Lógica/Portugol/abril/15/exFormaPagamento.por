programa
{
	
	funcao inicio()
	{
		real valor
		inteiro modoPagamento

		
		escreva("Informe o valor do produto: ")
		leia(valor)
		escreva("Informe a forma de pagamento: \n[1] A Vista \n[2] Prazo 30 dias \n[3] Prazo 60 dias \n[4]Prazo 90 dias\n")
		leia(modoPagamento)

		escolha(modoPagamento){
			caso 1:
				escreva("Total a pagar: ",valor*0.9)
				pare
			caso 2:
				escreva("Total a pagar: ",valor*0.95)
				pare
			caso 3:
				escreva("Total a pagar: ",valor)
				pare
			caso 4:
				escreva("Total a pagar: ",valor*1.05)
				pare
			caso contrario:
				escreva("Ação inválida")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 250; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */