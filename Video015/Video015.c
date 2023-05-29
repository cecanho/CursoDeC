#include<stdio.h>

const int TAM = 5;

void main(void){
/*
    Arrays
    - Um array (vetor) é uma variável que armazena diversos valores
    - Imagine uma linha de uma planilha do MS Excel,
    cada célula armazena um valor
    - Diferente do MS Excel, todos os valores armazendados DEVEM
    ser do mesmo tipo
    - Podemos criar arrays de: int, float, double e char
    - Como C roda em circuitos embarcados, ou seja, existe um
    limite de memória, um array DEVE ter seu tamanho definido
    no momento da criação. Porém existem estruturas de dados
    como as listas capazes de terem seus tamanhos alterados.
*/ 

double precoUnitario = 1.25;

double preco[TAM];
/*
preco[0] = precoUnitario;
preco[1] = preco[0];
preco[2] = 2.00;
preco[3] = 2.00;
preco[4] = 2.00;
*/
int i;

for(i=0; i<TAM; i++){
    preco[i] = 1.25;
    printf("\nO valor no posicao %d e: %0.2f", i, preco[i]);
}

}