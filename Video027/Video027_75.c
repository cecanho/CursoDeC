/*
75. Elaborar um programa em C para ler e 
imprimir uma relação contendo os animais 
de zoológico. O último animal é a zebra.
*/
#include<stdio.h>

const char *ultimo = "zebra";

void main(void){
    char *animal[15];    

    do{
        printf("Entre com o nome do animal (zebra para sair): ");
        scanf("%s", &animal);
        printf("\n%s\n", animal);
    }while(strcmp(animal, ultimo)!=0);
    
    //A comparação abaixo retorna 0 se forem letras iguais!
    //printf("%d", strcmp(animal, ultimo)); 
    
}