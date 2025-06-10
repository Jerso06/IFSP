programa
{
	
	funcao inicio()
	{
		inteiro mesas[5][5], contLivres=0, qtdLugar, mesaEscolhida=1

		para(inteiro i=0;i<5;i++){
			para(inteiro j=0;j<5;j++){
				mesas[i][j] = 0
			}
		}
		
		enquanto(mesaEscolhida!=0){
			contLivres=0
			escreva("Informe a mesa que gostaria de reservar (100 a 104): ")
			leia(mesaEscolhida)
			se(mesaEscolhida>=100 e mesaEscolhida<=104){
				escreva("Informe quantos lugares gostaria de reservar nesta mesa: ")
				leia(qtdLugar)
				para(inteiro i=mesaEscolhida%100;i==mesaEscolhida%100;i++){
					para(inteiro j=0;j<5;j++){
						se(mesas[i][j]==0){
							contLivres++
						}
					}
				}
				se(qtdLugar<=contLivres){
					escreva("Reserva realizada.\n")
					para(inteiro i=mesaEscolhida%100;i==mesaEscolhida%100;i++){
						para(inteiro j=0;j<5;j++){
							se(mesas[i][j]!=1){
								mesas[i][j] = 1
								qtdLugar--
								se(qtdLugar==0){
									pare
								}
							}
						}
					}
				}senao{
					escreva("Não existe lugar disponível nessa mesa.\n")
				}
			}senao{
				escreva("Mesa inválida.\n")
			}
		}
		escreva("Lugares ocupados: \n")
		para(inteiro i=0;i<5;i++){
			escreva("Mesa ",i+100, ": ")
			para(inteiro j=0;j<5;j++){
				escreva("[",mesas[i][j],"]")
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
 * @POSICAO-CURSOR = 906; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */