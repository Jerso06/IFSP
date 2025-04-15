programa
{
	
	funcao inicio()
	{
		inteiro menor=0, maior=0, idade, soma = 0

		para(inteiro i=0; i<15; i++){
			escreva("Informe a sua idade: ")
			leia(idade)
			soma+=idade
			se(idade<20){
				menor++
			}senao se(idade>50){
				maior++
			}
		}
		escreva("\nTotal pessoas com menos de 20 anos: ",menor)
		escreva("\nTotal pessoas com mais de 50 anos: ",maior)
		escreva("\nSoma das idades: ",soma)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 378; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */