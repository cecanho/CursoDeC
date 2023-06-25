#include<stdio.h>

/*
Entrada e saída:
- Por ser uma linguagem de baixo nível C "não possui" naturalmente
funções de entrada e saída. Para tanto, importamos a biblioteca
stdio.h que possui funções (streams) de I/O implementadas.
- stdio.h fornece funções como:
-- printf()
-- scanf()
-- sscanf()
-- fgets()
-- fprintf()
- C possui três tipos de streams I/O:
-- stdin (entrada)
-- stdout (saída)
-- stderr (erro)
- No caso da função printf, temos que especificar o tipo de saída de dados:
-- %c caractere
-- %s caractere (string)
-- %d inteiro
-- %f ponto flutuante
-- %p ponteiro
- Ainda, podemos utilizar escapes para imprimir com certo formato utilizando:
-- \n quebramos uma linha
-- \t dar um tab no momento em que estams imprimindo
-- \\ para imprimir uma barra invertida
-- \" para imprimir uma aspa duplas
-- \' para imprimir uma aspa simples
-- \0 aqui finaliza o nosso texto
*/

int main(void){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\nSua idade e: \n\t\"%d\"", idade);
    return 0;
}