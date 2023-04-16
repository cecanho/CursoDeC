#include<stdio.h>

void main(void){
    /*
    Ordem de precedencia do menor para o maior
    = atribuição
    + - operadores binarios
    * / operadores de multiplicacao e divisao
    + - operadores unarios

    Para quebrar a ordem de precedencia utilizamos ()
    */

   int a = 1, b = -1, c = 2, d, e, f;

   d = a + b * c;
   e = a + (b * c);
   f = (a + b) * c;
   printf("A variavel d tem valor: %d\n e a variavel e tem valor: %d", d, e);
   printf("\nA variavel f tem valor: %d", f);
}