#include<stdio.h>

void main(void){
/*
    Estrutura de repetição  do while
    - validação no fim de uma condição
    - enquanto verdadeira continua
    - necessidade de uma variável para definir parada
    - variável de parada pode ser um número ou caracter
*/ 

    int i = 3; // contador
    char s = '0';

    do{
        printf("\nNo primeiro laco o iterador i vale %d", i);
        i++;
    }while(i <= 3);

    i = 1;

    do{
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
    }while(i <= 3);
}