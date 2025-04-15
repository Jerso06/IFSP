programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		real valorProduto
		inteiro unidades,resto
		
		escreva("Informe o valor do produto: ")
		leia(valorProduto)
		se(valorProduto<1){
			valorProduto = 1
			escreva("O valor mínimo é 1 real, então alteramos o valor do produto.\n")
		}
		escreva("Informe a quantidades que foram compradas: ")
		leia(unidades)
		se(unidades>=3){
			resto = unidades % 3
			se(resto==0){
				escreva("Valor total: ",mat.arredondar(valorProduto*unidades*0.7, 2))
			}senao{
				escreva("Valor total: ",mat.arredondar(valorProduto*resto+(valorProduto*(unidades-resto)*0.7), 2))	
			}
			
		}senao{
			escreva("Valor total: ",mat.arredondar(valorProduto*unidades, 2))
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 303; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */