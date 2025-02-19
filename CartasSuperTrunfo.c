#include <stdio.h>

int main(){

    printf("CARTA01\n");
 
    char estado[50];
    char cidade[50];
    char codigo[50];
    int populacao;
    int pontos_turisticos;
    float pib;
    float area;
 
    printf("ESTADO\n");
    scanf("%s", estado);
 
    printf("CIDADE\n");
    scanf("%s", cidade);
 
    printf("CODIGO\n");
    scanf("%s", codigo);
 
    printf("POPULACAO\n");
    scanf("%d", &populacao);
 
    printf("PONTOS_TURISTICOS\n");
    scanf("%d", &pontos_turisticos);
 
    printf("PIB\n");
    scanf("%f", &pib);
 
    printf("AREA\n");
    scanf("%f", &area);
 

    printf("ESTADO: %s\n", estado);
    printf("CIDADE: %s\n", cidade);
    printf("CODIGO: %s\n", codigo);
    printf("POPULACAO: %d\n", populacao);
    printf("PONTOS_TURISTICOS: %d\n", pontos_turisticos);
    printf("PIB: %f\n", pib);
    printf("AREA: %f\n", area);

    //executar 2 vezes :)
    return 0;
}