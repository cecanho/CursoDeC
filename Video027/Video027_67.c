/*
67. Calcular a soma de N (valor a ser lido) 
primeiros números naturais (exceto o zero).
*/
#include<stdio.h>

void main(void){
    int MAX;
    int cont = 1;
    int soma = 0;
    
    printf("Qual o ultimo numero natural para a somatoria? ");
    scanf("%d", &MAX);

    while(cont <= MAX){
        soma += cont;
        cont++;
    }

    printf("\nA soma dos %d numeros naturais e %d", MAX, soma);
}