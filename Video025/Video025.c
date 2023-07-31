#include <stdio.h>

/*
54. Dado dois valores fixos de entrada (4, 101), 
trocar os valores das variáveis que foram armazenados 
e exibi-los.
*/

int main(void){
    int num1 = 4;
    int num2 = 101;
    int aux;

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("Variavel 1 %d e Variavel 2 %d", num1, num2);
    return 0;
}