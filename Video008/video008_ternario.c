#include <stdio.h>
#include <stdlib.h>

int NUM1 = 2;
int NUM2 = 18;

void main(void){
   /*
    - Operadores matemáticos
    - Operadores unários
    - Operadores de comparação
    - Operadores lógicos
    - Operadores de atribuição compostos
    - Operadores bitwise
    <condição> ? <expressão> : <expressão>

    - operadores de ponteiro
    - operadores de estrutura
    - operadores dive
*/
    char resultado = '0';

    printf("Operador ternario/bitwise:\nOperacao:\n<condicao> ? <expressao> : <expressao>\nresultado = NUM1 >= 18 ? 'S' : 'N'");
    resultado = NUM1 >= 18 ? 'S' : 'N';
    printf("\nA idade de %d eh maior ou igual a 18?\nResultado: %c", NUM1, resultado);
    resultado = NUM2 >= 18 ? 'S' : 'N';
    printf("\nA idade de %d eh maior ou igual a 18?\nResultado: %c", NUM2, resultado);
}