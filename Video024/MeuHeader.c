#include <stdio.h>

/*
Esta é uma função que retorna uma mensagem
autor: 
data da criação:
descrição:
*/
void mensagem(char *n){
    printf("Ola, sou %s\n", n);
}

void mes(int num){
    if(num==1){
        printf("JANEIRO");
    }
    if(num==2){
        printf("FEVEREIRO");
    }
    if(num==3){
        printf("MARCO");
    }
    if(num==4){
        printf("ABRIL");
    }
    if(num==5){
        printf("MAIO");
    }
    if(num==6){
        printf("JUNHO");
    }
    if(num==7){
        printf("JULHO");
    }
    if(num==8){
        printf("AGOSTO");
    }
    if(num==9){
        printf("SETEMBRO");
    }
    if(num==10){
        printf("OUTUBRO");
    }
    if(num==11){
        printf("NOVEMBRO");
    }
    if(num==12){
        printf("DEZEMBRO");
    }
    if((num < 1)||(num>12)){
        printf("INVALIDO");
    }
}