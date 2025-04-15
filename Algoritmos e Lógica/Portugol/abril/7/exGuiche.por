programa
{
	
	funcao inicio()
	{
		inteiro senha
		
		escreva("Informe sua senha: ")
		leia(senha)
		se(10<=senha e senha<=24){
			escreva("Guichê 1 Senha: ",senha)
		}senao se(25<=senha e senha<=49){
			escreva("Guichê 2 Senha: ",senha)
		}senao se(50<=senha e senha<=100){
			escreva("Guichê 3 Senha: ",senha)
		}senao{
			escreva("Guichê 4 Senha: ",senha)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 364; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */