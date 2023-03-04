/*
/   Autor: Cristiano José Cecanho
/   Curso de C
/   Tema: variáveis do tipo double 
*/
#include<stdio.h>

void main(void){
    double largura; //largura da caixa de fósforo
    double comprimento; //comprimento da caixa de fósforo
    largura = 2.4f;
    comprimento = 4.3;
    printf("\n");
    printf("%0.1f\n", largura);
    printf("%0.2f\n", comprimento);
    printf("%f\n", largura/comprimento);
}
