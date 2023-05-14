#include<stdio.h>

void main(void){
/*
    Estrutura de repetição while
    - validação no início de uma condição
    - enquanto verdadeira continua
    - necessidade de uma variável para definir parada
    - variável de parada pode ser um número ou caracter
*/ 

    int i = 1; // contador
    char s = '0';

    while(i <= 3){
        printf("\nNo primeiro laco o iterador i vale %d", i);
        i++;
    }

    i = 1;

    while(i <= 3){
        printf("\nDeseja sair?\nDigite 1: ");
        scanf(" %c", &s);
        if(s == '1')
            break;
        if (i != 0){
            if (i == 2){
                break;
            } 
            printf("\nNo segundo laco o iterador i vale %d", i); 
        } 
        i++;       
    }
}