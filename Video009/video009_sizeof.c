#include<stdio.h>

void main(void){
    
    int idade = 46;
    char letra = 'C';
    float altura = 1.69;
    double massa = 72.5;

    printf("Inteiro consome %d bits de memoria", sizeof(int));
    printf("\nIdade: %d\tConsumo Mem: %d", idade, sizeof(idade));

    printf("\nCaracter consome %d bits de memoria", sizeof(char));
    printf("\nLetra: %c\tConsumo Mem: %d", letra, sizeof(letra));

    printf("\nReal consome %d bits de memoria", sizeof(float));
    printf("\nAltura: %0.2f\tConsumo Mem: %d", altura, sizeof(altura));

    printf("\nDouble consome %d bits de memoria", sizeof(double));
    printf("\nMassa: %0.2f\tConsumo Mem: %d", massa, sizeof(massa));

}