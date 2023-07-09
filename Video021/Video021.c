#include<stdio.h>

/*
* Definição de tipo
* - A partir da palavra reservada typedef é possível criar novos tipos de dados
* - A base é criar a partir de um tipo existente
* - Por convenção um tipo criado deve ter as letras em MAIÚSCULO
* - Utilizado em tipos enumerados e registros (struct)
*/

/*Variável criada a partir de um typedef*/
typedef int IDADE;
IDADE idade = 47;

/*
* ENUMERADOS
* - Podemos entender como um lista de valores definidos, como por exemplo
* os dias da semana, os meses de um ano.
*/

/*Representação dos dias da semana*/
typedef enum{
    domingo,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
}SEMANA;

void main(void){
    printf("\nA variavel global idade possui valor: %d", idade);
    printf("\nDomingo e dia: ");
    SEMANA dia_da_semana = domingo;
    if(dia_da_semana == domingo){
        printf("\n0\n");
    }else if(dia_da_semana == segunda){
        printf("\n1\n");
    }else if(dia_da_semana == terca){
        printf("\n2\n");
    }else if(dia_da_semana == quarta){
        printf("\n3\n");
    }else if(dia_da_semana == quinta){
        printf("\n4\n");
    }else if(dia_da_semana == sexta){
        printf("\n5\n");
    }else if(dia_da_semana == sabado){
        printf("\n6\n");
    }else{
        printf("\nDia invalido");
    }
}