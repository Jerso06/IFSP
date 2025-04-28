programa
{
	
	funcao inicio()
	{
		inteiro valor, multiplicador=1
		
		escreva("Informe um valor: ")
		leia(valor)
		escreva(valor, "! = ")
		para(inteiro i=valor;i>=1;i--){
			multiplicador = multiplicador*i
			se(i!=1){
				escreva(i,"x")	
			}senao{
				escreva(i)
			}
			
		}
		escreva(" = ",multiplicador)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 238; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */