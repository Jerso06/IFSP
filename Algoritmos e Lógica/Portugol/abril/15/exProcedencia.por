programa
{
	
	funcao inicio()
	{
		inteiro codigo
		real valor
		
		escreva("Informe o preço do produto: ")
		leia(valor)
		escreva("Informe o código de origem: ")
		leia(codigo)
		
		se(codigo==5 ou codigo==6){
			codigo = 5
		}senao se(codigo>=7 e codigo<=9 ou codigo>=15 e codigo<=20){
			codigo = 7
		}senao se(codigo>=10 e codigo<=14){
			codigo = 10
		}

		escreva("\n")

		escolha(codigo){
			caso 1:
				escreva("Preço: ",valor, "\nProcedência: Sul")
				pare
			caso 2:
				escreva("Preço: ",valor, "\nProcedência: Norte")
				pare
			caso 3:
				escreva("Preço: ",valor, "\nProcedência: Leste")
				pare
			caso 4:
				escreva("Preço: ",valor, "\nProcedência: Oeste")
				pare
			caso 5:
				escreva("Preço: ",valor, "\nProcedência: Nordeste")
				pare
			caso 7:
				escreva("Preço: ",valor, "\nProcedência: Sudeste")
				pare
			caso 10:
				escreva("Preço: ",valor, "\nProcedência: Centro-Oeste")
				pare
			caso contrario:
				escreva("Preço: ", valor, "\nProcedência: Importado")
				pare
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 375; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */