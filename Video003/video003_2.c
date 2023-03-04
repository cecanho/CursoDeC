/*
/   Autor: Cristiano José Cecanho
/   Curso de C
/   Tema: variáveis do tipo float 
*/
#include<stdio.h>

void main(void){
    float largura; //largura da caixa de fósforo
    float comprimento; //comprimento da caixa de fósforo
    largura = 2.5f;
    comprimento = 4.3;
    printf("\n");
    printf("%0.1f\n", largura);
    printf("%0.2f\n", comprimento);
    printf("%f\n", largura/comprimento);
}
