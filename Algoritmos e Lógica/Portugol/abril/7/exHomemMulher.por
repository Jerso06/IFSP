programa
{
	
	funcao inicio()
	{
		inteiro h1, h2, m1, m2, soma=0, produto=1
		
		escreva("Informe a idade do primeiro homem: ")
		leia(h1)
		escreva("Informe a idade do segundo homem: ")
		leia(h2)
		se(h1>h2){
			soma+=h1
			produto*=h2
		}senao{
			soma+=h2
			produto*=h1
		}
		escreva("Informe a idade da primeira mulher: ")
		leia(m1)
		escreva("Informe a idade da segunda mulher: ")
		leia(m2)
		se(m1>m2){
			soma+=m2
			produto*=m1
		}senao{
			soma+=m1
			produto*=m2
		}
		escreva("\nSoma da idade (Homem mais velho + Mulher mais nova): ",soma)
		escreva("\nProduto da idade (Homem mais novo + Mulher mais velha): ",produto)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 575; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */