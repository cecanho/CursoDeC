/*
60. Receber a temperatura – em graus Celsius -  de 
uma pessoa e emitir uma mensagem se ela estiver com febre.
*/

#include <stdio.h>

void main(void){
    float temp;

    printf("Entre com a temperatura em graus Celsius (0.0): ");
    scanf("%f", &temp);

    if(temp>37){
        printf("Voce esta com FEBRE!");
    }else{
        printf("Voce nao esta com FEBRE!");
    }
}