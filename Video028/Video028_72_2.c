/*
79.2 Inicializar uma senha e pedir ao usuário 
para adivinha-la informando-o em caso de acerto.
*/

#include<stdio.h>

void main(void){
    char *senha = "Cr1st14n0";
    char *chance[10];

    int tentativas = 0;

    do{
        printf("Adivinhe a senha: *********");
        scanf("%s", &chance);
        tentativas++;
        if(tentativas==3){
            break;
        }
    }while(strcmp(chance, senha)!=0);

    if(tentativas<3)
        printf("\nAcertou Danadinho!!!");
    else
        printf("\nBye! Voce errou!");
}