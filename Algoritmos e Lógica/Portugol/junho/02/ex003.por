programa
{
	
	inteiro vetor[] = {1,2,3,4,5,6,7,8,9,10}
		
	funcao inicio()
	{
		caracter letra
		
		escreva("Informe uma opção (C ou I): ")
		leia(letra)
		mostra(letra)
	}

	funcao mostra(caracter valor){
		escreva("Vetor: \n")
		se(valor=='C' ou valor=='c'){
			para(inteiro i=0;i<10;i++){
				se(i!=9){
					escreva("[",vetor[i],"] , ")	
				}senao{
					escreva("[",vetor[i],"]")
				}
			}
		}senao se(valor=='I' ou valor=='i'){
			para(inteiro i=9;i>=0;i--){
				se(i!=0){
					escreva("[",vetor[i],"] , ")
				}senao{
					escreva("[",vetor[i],"]")
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
 * @POSICAO-CURSOR = 388; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */