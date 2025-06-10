programa
{
	
	funcao inicio()
	{
		inteiro a, b, c, verificador=0
		
		escreva("Informe o 1º valor: ")
		leia(a)
		escreva("Informe o 2º valor: ")
		leia(b)
		escreva("Informe o 3º valor: ")
		leia(c)
		verificador = verifica(a, b, c)
		se(verificador==1){
			tipo(a, b, c)
		}senao{
			escreva("Não pode ser um triangulo.")
		}
	}

	funcao inteiro verifica(inteiro i, inteiro j, inteiro k){
		se(i>j+k ou j>i+k ou k>i+j){
			retorne 0
		}senao{
			retorne 1
		}
	}

	funcao tipo(inteiro i, inteiro j, inteiro k){
		se(i==j e i==k){
			escreva("Triangulo Equilátero.")
		}senao se(i==j ou j==k ou k==i){
			escreva("Triangulo Isóceles.")
		}senao{
			escreva("Triangulo Escaleno.")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 328; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */