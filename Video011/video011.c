#include<stdio.h>

void main(void){
    /*
    Condicionais
    - if e else
    switch
    - Utilizado em casos que podem haver vários blocos de if/else
    - Pode conter if/else dentro de uma das seleções, assim como outras
    estruturas e loops.
    - A escolha é feita por meio de opções dadas ao usuário
    - A variável escolhida entra no switch e corresponde a um case
    - Cada case deve ser acompanhado de um break, caso contrário a estrutura
    executará o próximo case
    - Existe um case que atende as demais situações chamada de default
    */

    char escolha = '0';

    float num1 = 0.0;
    float num2 = 0.0;

    printf("Calculadora ( + - * / ):");
    printf("\n 1 - Adicao");
    printf("\n 2 - Subtracao");
    printf("\n 3 - Multiplicacao");
    printf("\n 4 - Divisao");
    printf("\n 0 - Sair");
    printf("\nDigite um numero: ");
    scanf("%c", &escolha);

    printf("Entre com o primeiro numero: '0.0'");
    scanf("%f", &num1);

    printf("Entre com o segundo numero: '0.0'");
    scanf("%f", &num2);

    switch(escolha){
        case '0':
            printf("Bye!");
            break;  
    // 1 - Adição
        case '1':
            printf("Result: %0.2f", num1 + num2);
            break;
    // 2 - Subtração
        case '2':
            printf("Result: %0.2f", num1 - num2);
            break;
    // 3 - Multiplicação
        case '3':
            printf("Result: %0.2f", num1 * num2);
            break;
    // 4 - Divisão
        case '4':
            if(num2 == 0.0){
                printf("O numero divisor nao pode ser igual a 0, ou 0.0");
            }else{
                printf("Result: %0.2f", num1 / num2);
            }
            break;
        default:
            printf("Bye!");
            break;
   }
 

   

   

   
}