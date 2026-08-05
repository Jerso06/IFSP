#include <stdio.h>
#include <stdlib.h>

typedef struct ContaBancaria{
    int numero;
    float saldo;
    struct ContaBancaria *next;
}ContaBancaria;

typedef struct Agencia{
    ContaBancaria *begin;
    ContaBancaria *end;
    int qtd_contas;
}Agencia;

//funcoes ContaBancaria
ContaBancaria *iniciarConta(int n, float s){
    ContaBancaria *cb = (ContaBancaria*) calloc(1, sizeof(ContaBancaria));
    cb->numero = n;
    cb->saldo = s;
    cb->next = NULL;
    return cb;
}

void depositar(ContaBancaria *CB, float valor){
    CB->saldo += valor;
}

void sacar(ContaBancaria *CB, float valor){
    if(valor > CB->saldo){
        printf("Valor indisponivel\n\n");
        return;
    }

    CB->saldo -= valor;
}

float pegarSaldo(ContaBancaria *CB){
    return CB->saldo;
}

ContaBancaria *encontrarConta(Agencia *A, int numeroConta){
    ContaBancaria *cb = A->begin;

    while(cb != NULL && cb->numero != numeroConta){
        cb = cb->next;
    }

    return cb;
}

//funcoes Agencia
Agencia *agenciaCreate(){
    Agencia *A = (Agencia*) calloc(1, sizeof(Agencia));
    A->begin = NULL;
    A->end = NULL;
    A->qtd_contas = 0;
}

void adicionarContaAgencia(Agencia *A, int numeroConta, float saldo){
    ContaBancaria *cb = iniciarConta(numeroConta, saldo);

    if(A->begin == NULL){
        A->begin = cb;
        A->end = cb;
    }else{
        A->end->next = cb;
        A->end = cb;
    }

    A->qtd_contas++;
}

void removerContaAgencia(Agencia *A, int numeroConta){
    ContaBancaria *cbPrev = NULL;
    ContaBancaria *cbPos = NULL;

    if(A->begin != NULL){ //lista nao vazia
        if(A->begin->numero == numeroConta){ //se for o primeiro no
            if(A->begin->next == NULL){ //se for o unico no
                cbPos = A->begin;
                free(cbPos);
                A->begin = NULL;
                A->end = NULL;
            }else{ //primeiro mas nao o unico elemento
                cbPos = A->begin;
                A->begin = cbPos->next;
                free(cbPos);
            }

            A->qtd_contas--;
        }else{ //nao eh o primeiro elemento
            cbPos = A->begin->next;
            cbPrev = A->begin;

            while(cbPos != NULL && cbPos->numero != numeroConta){
                cbPrev = cbPos;
                cbPos = cbPos->next;
            }

            if(cbPos != NULL){ //conta encontrada
                if(cbPos->next == NULL){ //ultimo elemento
                    cbPrev->next = NULL;
                    free(cbPos);
                    A->end = cbPrev;
                }else{ //nao e o ultimo
                    cbPrev->next = cbPos->next;
                    free(cbPos);
                }

                A->qtd_contas--;
            }else{ //conta nao encontrada
                printf("Conta nao encontrada");
            }
        }
    }
}

void mostrarContasAgencia(Agencia *A){
    ContaBancaria *cb = A->begin;

    printf("A");

    while(cb != NULL){
        printf(" -> %d", cb->numero);
        cb = cb->next;
    }

    printf(" -> fim\n");
}

int main()
{
    int opcao = 1;
    Agencia *ag = agenciaCreate();

    int numeroConta;
    float saldo;
    ContaBancaria *c;

    while(opcao > 0){
        printf("\n====Agencia EST2====\n");
        printf("1 - Criar conta bancaria\n");
        printf("2 - Depositar saldo na conta\n");
        printf("3 - Sacar saldo da conta\n");
        printf("4 - Mostrar saldo da conta\n");
        printf("5 - Excluir conta\n");
        printf("6 - Mostrar contas da agencia\n");
        printf("0 - Sair\n\n");
        printf("R: ");
        scanf("%d", &opcao);

        switch(opcao){
        case 0:
            printf("\nSaindo...");
            break;
        case 1:
            printf("Informe o numero da conta: ");
            scanf("%d", &numeroConta);

            c = encontrarConta(ag, numeroConta);
            if(c != NULL){
                printf("Ja existe uma conta com esse numero.\n");
            }else{
                printf("Informe o saldo inicial da conta: ");
                scanf("%f", &saldo);
                adicionarContaAgencia(ag, numeroConta, saldo);
                printf("Conta criada com sucesso.\n");
            }

            break;
        case 2:
            printf("Informe o numero da conta: ");
            scanf("%d", &numeroConta);

            c = encontrarConta(ag, numeroConta);
            if(c != NULL){
                printf("Informe o valor que deseja depositar: ");
                scanf("%f", &saldo);
                depositar(c, saldo);
            }else{
                printf("Conta nao encontrada.\n");
            }

            break;
        case 3:
            printf("Informe o numero da conta: ");
            scanf("%d", &numeroConta);

            c = encontrarConta(ag, numeroConta);
            if(c != NULL){
                printf("Informe o valor que deseja sacar: ");
                scanf("%f", &saldo);
                sacar(c, saldo);
            }else{
                printf("Conta nao encontrada.\n");
            }

            break;
        case 4:
            printf("Informe o numero da conta: ");
            scanf("%d", &numeroConta);

            c = encontrarConta(ag, numeroConta);
            if(c != NULL){
                printf("Saldo da conta: %.2f\n", pegarSaldo(c));
            }else{
                printf("Conta nao encontrada.\n");
            }
            break;
        case 5:
            printf("Informe o numero da conta: ");
            scanf("%d", &numeroConta);

            c = encontrarConta(ag, numeroConta);
            if(c != NULL){
                saldo = pegarSaldo(c);
                if(saldo != 0.0){
                    printf("Exclusao cancelada, ainda ha saldo na conta.\n");
                }else{
                    removerContaAgencia(ag, c->numero);
                    printf("Conta excluida com sucesso\n");
                }
            }else{
                printf("Conta nao encontrada.\n");
            }

            break;
        case 6:
            mostrarContasAgencia(ag);
            break;
        default:
            printf("Valor invalido");
        }
    }
}
