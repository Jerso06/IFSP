programa
{
	
	funcao inicio()
	{
		inteiro valores[10]

		para(inteiro i=0;i<10;i++){
			escreva("Informe o ",i+1," valor: ")
			leia(valores[i])
		}

		escreva("\n\n")
		para(inteiro i=0;i<10;i++){
			se(i!=9){
				escreva(valores[i],", ")	
			}senao{
				escreva(valores[i])
			}
		}

		para(inteiro i=9;i>=0;i--){
			se(i!=0){
				escreva(valores[i],", ")	
			}senao{
				escreva(valores[i])
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 173; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */