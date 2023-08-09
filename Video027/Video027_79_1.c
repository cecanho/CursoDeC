/*
79.1 Receber uma idade e, caso seja menor, 
emitir mensagem: O usuário é menor!
*/

#include<stdio.h>

void main(void){
    int idade = 0;

    printf("Entre com a sua idade: ");
    scanf("%d", &idade);

    if(idade<18){
        printf("\nO usuario e menor!");
    }else{
        printf("\nAcesso Liberado!");
    }
}