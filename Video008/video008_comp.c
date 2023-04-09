#include <stdio.h>
#include <stdlib.h>

int NUM1 = 2;
int NUM2 = 8;

void main(void){
   /*
    - Operadores matemáticos
    - Operadores unários
    - Operadores de comparação
    - Operadores lógicos
    - Operadores de atribuição compostos
    Operador    Nome                    Exemplo
    +=          Atribuição e adição     NUM1 += NUM2 
    -=          Atribuição e subtração  NUM1 -= NUM2
    *=          Atribuição e Multiplica NUM1 *= NUM2
    /=          Atribuição e divisão    NUM1 /= NUM2
    %=          Atribuição e módulo     NUM1 %= NUM2
    - operadores bitwise
    - operadores de ponteiro
    - operadores de estrutura
    - operadores dive
*/
    printf("Operador\t\tNome\t\t\tExemplo\n");
    NUM1 += NUM2;
    printf("+=\t\tAtribuicao e adicao\t\t\t%d\n", NUM1);
    NUM1 -= NUM2;
    printf("-=\t\tAtribuicao e subtracao\t\t\t%d\n", NUM1);
    NUM1 *= NUM2;
    printf("*= \t\tAtribuicao e multiplica\t\t\t%d\n", NUM1);
    NUM1 /= NUM2;
    printf("/=\t\tAtribuicao e divisao\t\t\t%d\n", NUM1);
    NUM1 %= NUM2;
    printf("%=\t\tAtribuicao e modulo\t\t\t%d\n", NUM1);
    }