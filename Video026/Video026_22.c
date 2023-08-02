/*
22. Dados os conjuntos A e B, com P e S 
elementos elaborar um programa em C que determine 
o conjunto interseção C.
Dados:
A = {1, 2, 3}
B = {3, 6}
*/
#include <stdio.h>

void main(void){
    int conjuntoA[3] = {1, 2, 3};
    int conjuntoB[2] = {2, 3};
    int conjuntoC[6];
    int qtdC = 0;

    for(int i=0;i<3;i++){
        for(int l=0;l<2;l++){
            if(conjuntoA[i]==conjuntoB[l]){
                conjuntoC[qtdC] = conjuntoA[i];
                qtdC++;
            }
        }
    }
    printf("C={");
    for(int i=0;i<qtdC;i++){
        if(qtdC>1)
            printf("%d ", conjuntoC[i]);
        else
            printf("%d", conjuntoC[i]);
    }
    printf("}");

}