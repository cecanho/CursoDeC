#include<stdio.h>

/*
* ESCOPO DE VARIÁVEIS
* Variáveis Globais
* - visualizadas por todo o programa
* Variáveis Locais
* - visualizada somente pela função que a criou
* - acesso externo somente por meio de heap usando ponteiros
* - dentro da função uma variável pode ser estática com o 
* uso da palavra reservada static
*/

/*Variável Global*/
int idade = 47;
float altura = 0.0;

int usoLocal(){
    int variavelInt = 10 + idade;
    return variavelInt;
}

int usoStatic(){
    int static contador = 0;
    contador++;
    return contador;
}

void main(void){
    altura = 1.695;
    printf("\nA variavel global idade possui valor: %d", idade);
    printf("\nA variavel global altura possui valor: %2.3f", altura);
    printf("\nA variavel local possui valor: %d", usoLocal());
    printf("\nA variavel estatica possui valor: %d", usoStatic());
    printf("\nA variavel estatica possui valor: %d", usoStatic());
    printf("\nA variavel estatica possui valor: %d", usoStatic());
}