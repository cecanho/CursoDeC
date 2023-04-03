#include <stdio.h>
#include <stdlib.h>

const int NUM1 = 0;
const int NUM2 = 1;

void main(void){
   /*
    - Operadores matemáticos
    - Operadores unários
    - Operadores de comparação
    - Operadores lógicos
        !   negação/NOT 
        &&  AND
        ||  OR
    
    - operadores de atribuição compostos
    - operadores bitwise
    - operadores de ponteiro
    - operadores de estrutura
    - operadores diversos
   */ 

  // Operador de comparação
    printf("\nOperador de || (or), entrada 1 %d ou entrada 2 %d: %d\n", NUM1, NUM1, NUM1||NUM1);
    printf("\nOperador de || (or), entrada 1 %d ou entrada 2 %d: %d\n", NUM1, NUM2, NUM1||NUM2);
    printf("\nOperador de || (or), entrada 1 %d ou entrada 2 %d: %d\n", NUM2, NUM1, NUM2||NUM1);
    printf("\nOperador de || (or), entrada 1 %d ou entrada 2 %d: %d\n", NUM2, NUM2, NUM2||NUM2);
}