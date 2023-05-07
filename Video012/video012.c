#include<stdio.h>

void main(void){
/*
    Estrutura de repetição para/for
    - palavra reservada for
    - iterador/contador deve ser inteiro i/cont
    - estrutura de decisão para validar o momento da parada
    - incrementador/decrementador
*/ 

    int i;

    for(i = 1; i <= 3; i++)
        printf("\nO iterador i vale %d", i);

    for(int l = 0; l <= 3; l++){
        if (l != 0){
            if (l == 3){
                break;
            } 
            printf("\nO iterador l vale %d", l); 
        }        
    }
}