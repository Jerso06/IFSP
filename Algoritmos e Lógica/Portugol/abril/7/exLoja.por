
programa
{
	
	funcao inicio()
	{
		real unidadesSalgados, unidadesBebidas, codSalgado, codBebida
		real valorFinal, valorSalgado, valorBebida
		
		escreva("Informe quantos salgados foram comprados: ")
		leia(unidadesSalgados)
		escreva("Informe o código do salgado: ")
		leia(codSalgado)
		se(codSalgado==101 ou codSalgado==102 ou codSalgado==103){
			escreva("informe quantas bebidas foram compradas: ")
			leia(unidadesBebidas)
			escreva("Informe o código da bebida: ")
			leia(codBebida)
			se(codBebida==201 ou codBebida==202 ou codBebida==203){
				se(codSalgado==101){
					valorSalgado = 4.5
				}senao se(codSalgado==102){
					valorSalgado = 5.5
				}senao{
					valorSalgado = 6.0
				}
				se(codBebida==201){
					valorBebida = 3.0
				}senao se(codBebida==202){
					valorBebida = 4.5
				}senao{
					valorBebida = 5.5
				}
				valorFinal = valorSalgado*unidadesSalgados + valorBebida*unidadesBebidas
				se(valorFinal>100){
					valorFinal *= 0.9
					escreva("Valor da compra = ",valorFinal)
				}senao{
					escreva("Valor da compra = ",valorFinal)
				}
			}senao se (codBebida==101 ou codBebida==102 ou codBebida==103){
				escreva("Código de Salgado!")
			}senao{
				escreva("Código inválido!")
			}
		}senao se(codSalgado==201 ou codSalgado==202 ou codSalgado==203){
			escreva("Código de bebida!")
		}senao{
			escreva("Código inválido!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1068; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */