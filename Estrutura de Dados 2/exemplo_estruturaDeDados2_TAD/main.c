#include <stdio.h>
#include <stdlib.h>

typedef struct ContaBancaria{
    int numero;
    float saldo;
}ContaBancaria;

ContaBancaria *iniciarConta(int n, float s){
    ContaBancaria *cb = (ContaBancaria*) calloc(1, sizeof(ContaBancaria));
    cb->numero = n;
    cb->saldo = s;
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

float imprimirSaldo(ContaBancaria *CB){
    return CB->saldo;
}

int main()
{
    ContaBancaria *conta = iniciarConta(7, 2000);

    depositar(conta, 7000);
    sacar(conta, 10000);
    printf("Saldo da conta: %.2f\n", imprimirSaldo(conta));
}
