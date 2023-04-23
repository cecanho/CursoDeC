#include<stdio.h>

void main(void){
    /*
    Condicionais
    if e else
    - precisa de um teste
    -- caso o teste seja verdadeiro ele se o fluxo do if
    -- caso o teste seja falso ele segue o fluxo do else
    - if pode ser encadeado
    - if pode executar vários testes
    idade1  idade2  (idade1>=18) (idade2>=18)   resultado
    18      18      true            true        Passagem Permitida
    18      17      true            false       Passagem Negada
    17      18      false           true        Passagem Negada
    17      17      false           false       Passagem Negada

    idade1  idade2  (idade1>=18 && idade2>=18)   resultado
    18      18      true            true        Passagem Permitida
    18      17      true            false       Passagem Negada
    17      18      false           true        Passagem Negada
    17      17      false           false       Passagem Negada

    idade1  idade2  (idade1>=18 || idade2>=18)   resultado
    18      18      true            true        Passagem Permitida
    18      17      true            false       Passagem Permitida
    17      18      false           true        Passagem Permitida
    17      17      false           false       Passagem Negada
    switch
    */

   int idade1 = 17;
   int idade2 = 17;

   if(idade1>=18 || idade2>=18){
        printf("\nPassagem Permitida\n");
   }else{
        printf("\nPassagem Negada\n");
   }  
}