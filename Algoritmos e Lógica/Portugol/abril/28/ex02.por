programa
{
	
	funcao inicio()
	{
		cadeia nome, nomeAlta = "", nomeBaixa = "", nomeNova = "", nomeVelha = ""
		inteiro idade, idadeMaior=0, idadeMenor=0
		real altura, alturaMaior=0.0, alturaMenor=0.0

		para(inteiro i=0;i<5;i++){
			escreva("\nInforme o seu nome: ")
			leia(nome)
			escreva("Informe a sua idade: ")
			leia(idade)
			escreva("Informe a sua altura: ")
			leia(altura)
			se(i==0){
				nomeAlta = nome
				nomeBaixa = nome
				nomeNova = nome
				nomeVelha = nome
				idadeMaior = idade
				idadeMenor = idade
				alturaMaior = altura
				alturaMenor = altura
			}senao{
				se(idade>idadeMaior){
					idadeMaior = idade
					nomeVelha = nome
				}senao se(idade<idadeMenor){
					idadeMenor = idade
					nomeNova = nome
				}

				se(altura>alturaMaior){
					alturaMaior = altura
					nomeAlta = nome
				}senao se(altura<alturaMenor){
					alturaMenor = altura
					nomeBaixa = nome
				}
			}
		}
		
		escreva("\nPessoa mais velha: ", nomeVelha)
		escreva("\nPessoa mais nova: ", nomeNova)
		escreva("\nPessoa mais alta: ", nomeAlta)
		escreva("\nPessoa mais baixa: ", nomeBaixa)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 581; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */