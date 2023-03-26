#include <stdio.h>
#include <stdlib.h>

const int NUM1 = 3;
const int NUM2 = 2;

void main(void){
   /*
    - operadores matemáticos
        =   Atribuição      idade = 46
        +   Adição          idade + 1
        -   Subtração       contador - 1
        *   Multiplicação   num * 2
        /   Divisão         num / 2
        %   Módulo/Resto    num % 2

    - Operadores unários
        +   Unário de soma          +num
        -   Unário de subtração     -num
        ++  Unário de incremento    num++ ou ++num
        --  Unário de decremento    num-- ou --num

    - operadores de comparação
    - operadores lógicos
    - operadores de atribuição compostos
    - operadores bitwise
    - operadores de ponteiro
    - operadores de estrutura
    - operadores diversos
   */ 

  // Operador de adição
    printf("\nA soma de %d com %d resulta em: \n%d\n", NUM1, NUM2, NUM1 + NUM2);

  // Operador de subtração
    printf("\nA subtracao de %d com %d resulta em: \n%d\n", NUM1, NUM2, NUM1 - NUM2);

  // Operador de multiplicação
    printf("\nA multiplicacao de %d com %d resulta em: \n%d\n", NUM1, NUM2, NUM1 * NUM2);

  // Operador de Divisão
    printf("\nA divisao de %d com %d resulta em: \n%d\n", NUM1, NUM2, NUM1 / NUM2);

  // Operador de Módulo ou Resto de divisão
    printf("\nO resto da divisao de %d com %d resulta em: \n%d\n", NUM1, NUM2, NUM1 % NUM2);

    printf("\nDigite qualquer tecla e tecle enter para continuar...");
    char op;
    scanf(" %c", &op);
    system("CLS");
    int NUM3 = 5;
    // Operador unário de soma
    printf("\nResultado de operador unário de soma com %d: \n%d\n", NUM3, +NUM3);
    // Operador unário de subtração
    printf("\nResultado de operador unário de subtracao com %d: \n%d\n", NUM3, -NUM3);
    // Operador unário de pré-incremento
    printf("\nResultado de operador unário de pre-incremento %d: \n%d\n", NUM3, ++NUM3);
    // Operador unário de pós-incremento
    printf("\nResultado de operador unário de pos-incremento %d: \n%d\n", NUM3, NUM3++);
    // Operador unário de pré-decremento
    printf("\nResultado de operador unário de pre-decremento %d: \n%d\n", NUM3, --NUM3);
    // Operador unário de pós-decremento
    printf("\nResultado de operador unário de pos-decremento %d: \n%d\n", NUM3, NUM3--);
}