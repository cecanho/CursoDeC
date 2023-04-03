#include <stdio.h>
#include <stdlib.h>

const int NUM1 = 3;
const int NUM2 = 2;
const int NUM3 = 3;

void main(void){
   /*
    - Operadores matemáticos
    - Operadores unários
    - Operadores de comparação
        ==  operador de igualdade
        !=  operador de diferença
        >   Maior que
        <   Menor que
        >=  Maior igual a
        <+  Menor igual a

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
    printf("\nOperador de igualdade compara se %d e igual a %d resulta em: %d\n", NUM1, NUM2, NUM1 == NUM2);
    printf("\nOperador de igualdade compara se %d e igual a %d resulta em: %d\n", NUM1, NUM3, NUM1 == NUM3);

    printf("\nOperador de diferenca compara se %d e diferente a %d resulta em: %d\n", NUM1, NUM2, NUM1 != NUM2);
    printf("\nOperador de diferenca compara se %d e diferente a %d resulta em: %d\n", NUM1, NUM3, NUM1 != NUM3);

    printf("\nOperador maior que compara se %d e maior que %d resulta em: %d\n", NUM1, NUM2, NUM1 > NUM2);
    printf("\nOperador maior que compara se %d e maior que %d resulta em: %d\n", NUM1, NUM3, NUM1 > NUM3);

    printf("\nOperador menor que compara se %d e menor que %d resulta em: %d\n", NUM1, NUM2, NUM1 < NUM2);
    printf("\nOperador menor que compara se %d e menor que %d resulta em: %d\n", NUM1, NUM3, NUM1 < NUM3);

    printf("\nOperador maior/igual a compara se %d e maior/igual a %d resulta em: %d\n", NUM1, NUM2, NUM1 >= NUM2);
    printf("\nOperador maior/igual a compara se %d e maior/igual a %d resulta em: %d\n", NUM1, NUM3, NUM1 >= NUM3);

    printf("\nOperador menor/igual a compara se %d e menor/igual a %d resulta em: %d\n", NUM1, NUM2, NUM1 <= NUM2);
    printf("\nOperador menor/igual a compara se %d e menor/igual a %d resulta em: %d\n", NUM1, NUM3, NUM1 <= NUM3);

    char op;
    printf("Digite um tecla e de enter para continuar...");
    scanf(" %c", &op);

    // Operador lógico
    printf("\nOperador logico de negacao nega um valor atribuido %d = %d", NUM1, !NUM1);
    printf("\nOperador logico de negacao nega um valor resultante (%d==%d) = %d", NUM1, NUM3, !(NUM1==NUM3));

    printf("\nOperador logico and && (%d&&%d) = %d", NUM1, NUM2, NUM1&&NUM2);
    printf("\nOperador logico and && (%d&&%d) = %d", NUM1, NUM3, NUM1&&NUM3);

    printf("\nOperador logico or || (%d||%d) = %d", NUM1, NUM2, NUM1||NUM2);
    printf("\nOperador logico or || (%d||%d) = %d", NUM1, NUM3, NUM1||NUM3);


}