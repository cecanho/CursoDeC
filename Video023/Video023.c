#include<stdio.h>

/*
* Parâmetros da linha de comando
* - Você ja deve ter reparado com comandos no Prompt de comando (MSDOS)
* que possuem parâmetros, como por exemplo DIR /B
* - O DIR é o comando para listar diretório
* - /B é o parâmetro para somente mostrar o cabeçalho do arquivo
* a ser listado
* - Em C é muito comum vermos esta assinatura do main em alguns fontes:
* int main(int argc, char *argv[])
* - argc recebe um número de entrada na linha de comando
* - argv recebe um array de entrada na linha de comando
* - Após a compilação basta chamar o nome do programa e adicionar o parâmetro
* de entrada para ser utilizado no programa
*/

int main(int argc, char *argv[]){
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}