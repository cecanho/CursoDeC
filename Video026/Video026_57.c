/*
57. Elaborar um programa em C para receber 
um número inteiro e informar se ele é para ou impar.
*/
#include <stdio.h>

int main(void){
    int numeroInteiro;
    printf("Olha, digite um numero inteiro: ");
    scanf("%d", &numeroInteiro);

    if(numeroInteiro == 0){
        printf("\n%d e nulo, nao e par nem impar!", numeroInteiro);
        return 0;
    }

    if(numeroInteiro % 2 == 0){
        printf("\nO numero %d e par!", numeroInteiro);
    }else{
        printf("\nO numero %d e impar!", numeroInteiro);
    }
    return 0;
}