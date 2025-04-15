programa
{
	
	funcao inicio()
	{
		real valor=0,menorValor=0,maiorValor=0,contador=0
		
		para(inteiro i=0; i<10; i++){
			enquanto(valor<=0){
				se(contador==0){
					escreva("Informe o preço do ",i+1,"º produto: ")
					leia(valor)
					contador++
				}senao{
					escreva("Informe um preço válido: ")
					leia(valor)
				}
			}
			se(i==0){
				menorValor = valor
				maiorValor = valor
			}senao{
				se(valor>maiorValor){
					maiorValor = valor
				}senao se(valor<menorValor){
					menorValor = valor
				}
			}
			valor = 0
			contador = 0
		}
		escreva("Produto + caro: ",maiorValor, "\nProduto + barato: ", menorValor)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 549; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */