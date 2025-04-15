programa
{
	
	funcao inicio()
	{
		inteiro dia
	
		para(inteiro i=0; i<10; i++){
			escreva("Informe um valor de 1 a 7: ")
			leia(dia)
			se(dia<=0 ou dia>7){
				escreva("ERRO!\n")
			}senao{
				escolha(dia){
					caso 1:
						escreva("1 = Domingo\n")
						pare
					caso 2:
						escreva("2 = Segunda-Feira\n")
						pare
					caso 3:
						escreva("3 = Terça-Feira\n")
						pare
					caso 4:
						escreva("4 = Quarta-Feira\n")
						pare
					caso 5:
						escreva("5 = Quinta-Feira\n")
						pare
					caso 6:
						escreva("6 = Sexta-Feira\n")
						pare
					caso 7:
						escreva("7 = Sabado\n")
						pare
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 185; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */