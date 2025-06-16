programa {

  inclua biblioteca Util --> ut

  inteiro cidades[4][4]

  funcao inicio() {

    inteiro cidadeEscolhida, entram=0, saem=0, chegaMais

    para(inteiro i=0;i<4;i++){
      para(inteiro j=0;j<4;j++){
        se(i==j){
          cidades[i][j]=1
        }senao{
          cidades[i][j]=ut.sorteia(0,1)
        }
      }
    }

    escreva("Matriz: \n")
    para(inteiro i=0;i<4;i++){
      para(inteiro j=0;j<4;j++){
        escreva("[",cidades[i][j],"]   ")
      }
      escreva("\n")
    }
    
    escreva("\nInforme uma cidade (0 a 3): ")
    leia(cidadeEscolhida)
    contEntradasSaidas(cidadeEscolhida, entram, saem)
    escreva("\nNa cidade ",cidadeEscolhida, " saem: ",saem," e entram: ",entram,"\n")
    chegaMais = entraMais()
    escreva("\nCidade que mais chega estradas é: Cidade ",chegaMais,"\n")
    saidasDiretas(cidadeEscolhida)
    isolada()
  }

  funcao isolada(){

    inteiro cont=0, contG=0
    
    para(inteiro i=0;i<4;i++){
      cont=0
      para(inteiro j=0;j<4;j++){
        se(j!=i){
          se(cidades[j][i]==1){
            cont++
          }
        }
      }
      se(cont==0){
        escreva("\nA cidade ",i, " é isolada.")
        contG++
      }
    }
    se(contG==0){
      escreva("Não há cidade isolada.")
    }
  }

  funcao saidasDiretas(inteiro cidade){

    escreva("\nCidades que entram na cidade ",cidade, ": ")
    para(inteiro i=0;i<4;i++){
      se(i!=cidade){
        se(cidades[i][cidade]==1){
          escreva(i,", ")
        }
      }
    }
    escreva("\n")
  }

  funcao inteiro entraMais(){
    inteiro contEntradas=0, maisEntradas=0, cidade
    para(inteiro i=0;i<4;i++){
      contEntradas=0
      para(inteiro j=0;j<4;j++){
        se(j!=i){
          se(cidades[j][i]==1){
            contEntradas++
          }
        }
      }
      se(contEntradas>maisEntradas){
        maisEntradas=contEntradas
        cidade = i
      }
    }
    retorne cidade
  }

  funcao contEntradasSaidas(inteiro cidade, inteiro &entradas, inteiro &saidas){
    entradas=0
    saidas=0

    //saem
    para(inteiro i=0;i<4;i++){
      se(cidade!=i){
        se(cidades[cidade][i]==1){
          saidas+=1
        }
      }
    }

    //entram
    para(inteiro i=0;i<4;i++){
      se(cidade!=i){
        se(cidades[i][cidade]==1){
          entradas+=1
        }
      }
    }
  }
}
