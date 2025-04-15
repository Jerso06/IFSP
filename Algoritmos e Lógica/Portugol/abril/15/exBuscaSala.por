programa
{
	funcao inicio()
	{
		caracter sala
		
		escreva("Informe a sala que deseja: ")
		leia(sala)

		escolha(sala){
			caso 'A':
				escreva("Local: Auditório (segundo andar) \nQuantidade de Cadeiras: 100")
				pare
			caso 'B':
				escreva("Local: A204 (segundo andar) \nQuantidade de Cadeiras: 40")
				pare
			caso 'C':
				escreva("Local: A205 (segundo andar) \nQuantidade de Cadeiras")
				pare
			caso contrario:
				escreva("Sala desconhecida")
				pare
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 12; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 */