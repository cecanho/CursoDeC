/*
- Entrada de dados pelo teclado com scanf
*/
#include<stdio.h>

void main(void){
	char ch;
	int numInt;
	float numReal;

	printf("\nEntre com um caracter e pressione Enter: ");
	scanf("%c", &ch);

	printf("\nVocê escolheu o caracter: %c\n", ch);

	printf("\n Entre com um numero inteiro e pressione Enter:");
	scanf("%d", &numInt);

	printf("\nVocê escolheu o numero inteiro: %d\n", numInt);

	printf("\n Entre com um numero real e pressione Enter:");
	scanf("%f", &numReal);

	printf("\nVocê escolheu o numero real: %f\n", numReal);
}