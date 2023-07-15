#include<stdio.h>

/*
* Definição de tipo
* - A partir da palavra reservada typedef é possível criar novos tipos de dados
* - A base é criar a partir de um tipo existente
* - Por convenção um tipo criado deve ter as letras em MAIÚSCULO
* - Utilizado em tipos enumerados e registros (struct)
*/

/*Tipos complexos com registros (struct)*/
struct pessoa{
    int id;
    char *nome;
}funcionario, diretor;

/*Neste caso funcionario e diretor são variáveis a partir do tipo pessoa*/

/*Agora podemos também criar um vetor com várias estruturas*/
struct pessoa professor[20];

/*Outra forma que simplifica o trabalho*/
typedef struct{
    char *nome;
    int idade;
    float altura;
}PESSOA;

int main(void){
    /*Para inicializar  uma variável basta:*/
    diretor.id = 46;
    diretor.nome = "Cristiano";
    /*Imprimindo o diretor*/
    printf("\nID> %u\nDiretor> %s\n", diretor.id, diretor.nome);
    PESSOA cris = {"Cristiano", 46, 1.69};
    printf("\nNOME> %s\nIDADE> %u\nALTURA> %0.2f", cris.nome, cris.idade, cris.altura);
    return 0;
}