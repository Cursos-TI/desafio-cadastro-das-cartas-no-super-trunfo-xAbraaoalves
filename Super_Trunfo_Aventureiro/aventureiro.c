#include <stdio.h>

int main(){
	
    char estado[50];
    char texto[50];
    char codigo[50];
    int populacao;
    int pontos_turisticos;
    float pib;
    float area;
    float densidade_populacional;
    float pib_per_capita;
    
    
    printf("*** Super Trunfo Aventureiro ***\n");
    
    printf("Carta1\n");
    
    printf("Estado: \n");
    scanf("%s", estado);
    
    printf("Cidade: \n");
    scanf("%s", texto);
    
    printf("Codigo: \n");
    scanf("%s", codigo);
    
    printf("Populacao: \n");
    scanf("%d", &populacao);
    
    printf("Pontos_Turisticos; \n");
    scanf("%d", &pontos_turisticos);
    
    printf("Pib: \n");
    scanf("%f", &pib);
    
    printf("Area: \n");
    scanf("%f", &area);
    
    densidade_populacional = (float)'populacao' / area;
    printf("Densidade_Populacional e: %.2f\n", densidade_populacional);
    
    pib_per_capita = (float)(pib * 1000000) / populacao;
    printf("Pib_Per_Capita e: %.2f\n", pib_per_capita);
    
    
    
    
    
    char estado2[50];
    char texto2[50];
    char codigo2[50];
    int populacao2;
    int pontos_turisticos2;
    float pib2;
    float area2;
    float densidade_populacional2;
    float pib_per_capita2;
    
    
    printf("Carta2\n");
    
    printf("Estado2: \n");
    scanf("%s", estado2);
    
    printf("Cidade2: \n");
    scanf("%s", texto2);
    
    printf("Codigo2: \n");
    scanf("%s", codigo2);
    
    printf("Populacao2: \n");
    scanf("%d", &populacao2);
    
    printf("Pontos_Turisticos2; \n");
    scanf("%d", &pontos_turisticos2);
    
    printf("Pib2: \n");
    scanf("%f", &pib2);
    
    printf("Area2: \n");
    scanf("%f", &area2);
    
    densidade_populacional2 = (float)'populacao2' / area2;
    printf("Densidade_Populacional2 e: %.2f\n", densidade_populacional2);
    
    pib_per_capita2 = (float)(pib2 * 1000000) / populacao2;
    printf("Pib_Per_Capita2 e: %.2f\n", pib_per_capita2);
    

 
    return 0;
 }