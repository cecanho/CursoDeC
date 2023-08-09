/*
82.7 Calcular o MDC entre dois números ({18, 12}, {27, 12},
 {27,11}) segundo p algoritmo de Euclides (“jogo da velha”).
 Para calcular o mdc(m,n) para 0 <= n < m, 
 o algoritmo de Euclides usa a seguinte recorrência:

    mdc(m,0)   ==  m;
    mdc(m,n)   ==  mdc(n, m % n),  para n > 0. 
Assim, por exemplo,
mdc(12,18) == mdc(18,12) == mdc(12,6) == mdc(6,0) == 6.
*/
#include<stdio.h>

int mdc(int m, int n){
    int resto;

    if(n==0)
        return m;

    do{
        resto = m % n;
        m = n;
        n = resto;
    }while(resto!=0);
    return m;
}

int main(void){
    printf("O MDC de 27 e 12 e: %d", mdc(27, 12));
    return 0;
}