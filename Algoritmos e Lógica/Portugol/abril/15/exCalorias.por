programa
{
	
	funcao inicio()
	{
		inteiro prato, sobremesa, bebida, calPrato=0, calSobremesa=0, calBebida=0
		
		escreva("Informe o tipo de prato: \n")
		escreva("[1] Vegetariano \n[2] Peixe \n[3] Frango \n[4] Carne \nR: ")
		leia(prato)
		escolha(prato){
			caso 1:
				calPrato = 180
				pare
			caso 2:
				calPrato = 230
				pare
			caso 3:
				calPrato = 250
				pare
			caso 4:
				calPrato = 350
				pare
			caso contrario:
				escreva("Tipo inválido\n\n")
		}
		escreva("Informe a sobremesa: \n")
		escreva("[1] Abacaxi \n[2] Sorvete Diet \n[3] Mousse Diet \n[4] Mousse Chocolate \nR: ")
		leia(sobremesa)
		escolha(sobremesa){
			caso 1:
				calSobremesa = 75
				pare
			caso 2:
				calSobremesa = 110
				pare
			caso 3:
				calSobremesa = 170
				pare
			caso 4:
				calSobremesa = 200
				pare
			caso contrario:
				escreva("Sobremesa inválida\n\n")
		}
		escreva("Informe a bebida: \n")
		escreva("[1] Chá \n[2] Suco de Laranja \n[3] Suco de Melão \n[4] Refrigerante Diet \nR: ")
		leia(bebida)
		escolha(bebida){
			caso 1:
				calBebida = 20
				pare
			caso 2:
				calBebida = 70
				pare
			caso 3:
				calBebida = 100
				pare
			caso 4:
				calBebida = 65
				pare
			caso contrario:
				escreva("Bebida inválida\n\n")
		}

		escreva("Quantidade total de calorias: ",calPrato+calBebida+calSobremesa)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1245; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */