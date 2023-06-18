#include<stdio.h>

/*
Dado três valores verifique se os mesmos formam um triângulo
Dica: a soma de dois lados não pode ser menor igual ao
comprimento do outro!
*/

int ehTriangulo(int l1, int l2, int l3){
    if(((l1 + l2) > l3) && ((l1 + l3) > l2) && ((l2 + l3) > l1)){
        return 0;
    }else{
        return 1;
    }
}

void main(void){
    int lado1;
    int lado2;
    int lado3;

    printf("\nInforme a primeira medida: ");
    scanf("%d", &lado1);
    printf("\nInforme a segunda medida: ");
    scanf("%d", &lado2);
    printf("\nInforme a terceira medida: ");
    scanf("%d", &lado3);
    
    if(ehTriangulo(lado1,lado2,lado3) == 0){
        printf("\nOs tres lados informados formam um triangulo!");
    }else{
        printf("\nOs tres lados informados nao formam um triangulo!");
    }
}