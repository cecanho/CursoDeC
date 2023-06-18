#include<stdio.h>

/*
Esta é uma assinatura da função nome()
*/
void nome(void);

int numero(void){
    int ano;
    printf("\nDigite o ano que nasceu: ");
    scanf("%d", &ano);
    return ano;
}

int main(void){
/*
    Funções:
    - Possuem nome e são chamadas/invocadas por este
    - Podem especificar um valor de retorno
    - Não retornam mais de um valor
    - Se não possuir valor de retorno, deve ser indicado void antes
    do nome da função
    - Podem ter argumentos
    - Possuem um corpo envolvido por chaves
    - Devem ser criadas em um header, ou antes da função main
    - Se criada após o main, deve ser criada a assinatura da função
*/ 
    nome();
    printf("\nSua idade e: %d", 2023 - numero());
    return 0;
}

void nome(void){
    printf("\nEsta e uma funcao sem retorno!");
}