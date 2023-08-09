/*
80.3 Receber o nome e a idade de duas pessoas 
e exibir o nome e a idade da mais velha.
*/
#include<stdio.h>

void main(void){
    char *nome_pessoa_1[10];
    char *nome_pessoa_2[10];
    int idade_pessoa_1;
    int idade_pessoa_2;

    printf("\nEntre com o nome da pessoa: ");
    scanf("%s", &nome_pessoa_1);
    printf("\nEntre com a idade desta pessoa: ");
    scanf(" %d", &idade_pessoa_1);
    
    printf("\nEntre com o nome da pessoa: ");
    scanf("%s", &nome_pessoa_2);
    printf("\nEntre com a idade desta pessoa: ");
    scanf(" %d", &idade_pessoa_2);

    if(idade_pessoa_1>idade_pessoa_2)
        printf("\n%s tem %d e e a mais velha", nome_pessoa_1, idade_pessoa_1);
    else
        printf("\n%s tem %d e e a mais velha", nome_pessoa_2, idade_pessoa_2);
}