/*
Contar os votos em uma eleição com dois candidatos. 
Ao final mostrar o vencedor e as estatísticas eleitorais:
% CAD 1
% CAD 2
% BRANCOS
% NULOS
*/
#include<stdio.h>

int main(void){
    int saida = 0;
    int cad1 = 0;
    int cad2 = 0;
    int nulo = 0;
    int branco = 0;
    int total_de_votos = 0;
    int escolha = 10;
   
    do{
        printf("\nPara votar do Candidato 1, digite 1");
        printf("\nPara votar do Candidato 2, digite 2");
        printf("\nPara anular seu voto, digite 0");
        printf("\nPara votar em branco, digite 4");
        printf("\nPara finalizar, digite 5: \n-> ");
        scanf("%d", &escolha);
        
        switch (escolha){
            case 1: cad1++;
                    total_de_votos++;
                    break;
            case 2: cad2++;
                    total_de_votos++;
                    break;
            case 0: nulo++;
                    total_de_votos++;
                    break;
            case 4: branco++;
                    total_de_votos++;
                    break;      
            case 5: saida = 5;
                    break;
            default:    saida = 5;
                        break;
        }
        
    }while(saida!=5);

    printf("\nCANDIDATO 1: %2.1f%%", (((float)cad1 / (float)total_de_votos) * 100.0));
    printf("\nCANDIDATO 2: %2.1f%%", (((float)cad2 / (float)total_de_votos) * 100.0));
    printf("\nVotos NULOS: %2.1f%%", (((float)nulo / (float)total_de_votos) * 100.0));
    printf("\nVotos em BRANCO: %2.1f%%", (((float)branco / (float)total_de_votos) * 100.0)); 
    return 0;
}