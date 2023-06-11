#include<stdio.h>

void main(void){
/*
    Ponteiros
    - Um ponteiro é um endereço de um bloco de memória
*/ 


int res = 1;

printf("\nA variavel res tem valor = %d", res);
printf("\nEsta variavel (res) esta localizada no endereco do bloco de memoria = %p", &res);

int *endereco = &res;

printf("\nA variavel endereco aponta para res que possui valor = %u", *endereco);

*endereco = 46;
printf("\nA variavel res tem valor = %d", res);

int idades[3] = {30, 46, 50};
printf("\nA primeira idade gravada sem uso de ponteiro = %d", idades[0]);
printf("\nA primeira idade gravada com uso de ponteiro = %u", *idades);
printf("\nA segunda idade gravada com uso de ponteiro = %u", *(idades + 1));
printf("\nA terceira idade gravada com uso de ponteiro = %u", *(idades + 2));
}