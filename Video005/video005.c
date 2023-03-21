#include<stdio.h>

const float PI = 3.1416;
const int MAX = 3;

void main(void){
    printf("Informe o raio do circulo para calcular a area: ");
    int raio;
    scanf("%d", &raio);
    printf("A area do circulo com raio %d e: %0.2f", raio, (raio * raio) * PI);
}