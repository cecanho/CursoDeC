#include<stdio.h>
#include<string.h>

void main(void){
/*
    Strings
    - Tipo de dados criado a partir de um array de char (caracteres)
    - Pode ser inicializada como um array normal
    - Ou como uma string literal com os caracteres dentro de aspas duplas
    - É impressa com o printf por meio do símbolo "%s"
    - Sempre deixe um espaço a mais no vetor
    - Adicione a biblioteca string.h para ter acesso a:
    -- strcpy() para copiar uma string sobre outra
    -- strcat() para anexar uma string à outra
    -- strcmp() para comparar se duas strings são iguais
    -- strncmp() para comparar os primeiros n caracteres de duas strings
    -- strlen() para calcular o tamanho de uma string
*/ 

char nome[10] = {'C', 'r', 'i', 's', 't', 'i', 'a' , 'n', 'o'};
char sobrenome[10] = {'C', 'e', 'c', 'a', 'n', 'h', 'o'};
char juntar[20];
int res;

printf("\nO nome gravado na variavel nome e: %s", nome);
printf("\nA variavel nome tem tamanho igual a: %d", strlen(nome));
printf("\nLendo uma string: ");
scanf(" %s", nome);
printf("\nImprimindo a variavel lida: %s", nome);
printf("\nO resultado da comparacao entre duas strings: %d", strcmp(nome, sobrenome));
printf("\nO resultado da comparacao entre as primeiras letras de duas strings: %d", strncmp(nome, sobrenome, 5));
strcpy(juntar, nome);
printf("\nConteudo copiado para a variavel juntar: %s", juntar);
strcat(juntar, "\t");
strcat(juntar, sobrenome);
printf("\nConteudo adicionado para a variavel juntar: %s", juntar);
printf("\nTodas em minusculo: %s", strlwr(juntar));
printf("\nTodas em maiusculo: %s", strupr(juntar));
res = strncmp(nome, sobrenome, 9);
if (res < 0){
    printf("\nNome %d e menor que Sobrenome %d", strlen(nome), strlen(sobrenome));
}else if (res > 0){
    printf("\nSobrenome %d e menor que nome %d", strlen(sobrenome), strlen(nome));
}else{
    printf("\nNome e sobrenome tem tamanhos iguais");
}
}