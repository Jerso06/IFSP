programa
{
	inclua biblioteca Util-->ut
	
	funcao inicio()
	{
		real celsius[6][5], fahrenheit[6][5]

		para(inteiro i=0;i<6;i++){
			para(inteiro j=0;j<5;j++){
				escreva("Digite a temperatura da linha ",i+1, " e coluna ",j+1,": ")
				leia(celsius[i][j])
			}
		}

		para(inteiro i=0;i<6;i++){
			para(inteiro j=0;j<5;j++){
				fahrenheit[i][j] = (celsius[i][j]*1.8)+32
			}
		}

		escreva("Temperaturas em Fahrenheit: \n")
		para(inteiro i=0;i<6;i++){
			para(inteiro j=0;j<5;j++){
				escreva("[",fahrenheit[i][j],"], ")
			}
			escreva("\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 523; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */