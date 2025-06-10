programa
{
	
	funcao inicio()
	{
		real funcionarias[6][3], servicosPrecos[] = {10.0, 15.0, 30.0}, salarios[6]
		cadeia servico[] = {"Pés", "Mãos", "Corte de cabelo"}
		para(inteiro i=0;i<6;i++){
			para(inteiro j=0;j<3;j++){
				escreva("Quantidade de ",servico[j], " feitos pela ",i+1, " funcionaria: ")
				leia(funcionarias[i][j])
				salarios[i]+=funcionarias[i][j]*servicosPrecos[j]
			}
			salarios[i]/=2
			escreva("\n")
		}

		escreva("\nSalários: \n")
		para(inteiro i=0;i<6;i++){
			escreva("Funcionaria ", i+1, ": R$", salarios[i], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 90; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */