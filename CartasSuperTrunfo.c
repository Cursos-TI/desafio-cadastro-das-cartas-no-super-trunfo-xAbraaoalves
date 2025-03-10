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
    float super_poder;
    
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
    
    super_poder = (unsigned)(populacao + area + pib + pontos_turisticos + pib_per_capita) - densidade_populacional;
    printf("Super poder: %2.f\n", super_poder);
    
    
    
    char estado2[50];
    char texto2[50];
    char codigo2[50];
    int populacao2;
    int pontos_turisticos2;
    float pib2;
    float area2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;
    
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
    
    super_poder2 = (unsigned)(populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2) - densidade_populacional2;
    printf("Super poder2: %2.f\n", super_poder2);
    
    printf("***Comparaçao De Cartas***\n");
    printf("Populacao: Carta1 > Carta2: %d\n", populacao > populacao2);
    printf("Area: Carta1 > Carta2: %d\n", area > area2);
    printf("Pib: Carta1 > Carta2: %d\n", pib > pib2);
    printf("Pontos Turisticos: Carta1 > Carta2: %d\n", pontos_turisticos > pontos_turisticos2);
    printf("Densidade Populacional: Carta1 > Carta2: %d\n", densidade_populacional > densidade_populacional2);
    printf("Pib per Capita: Carta1 > Carta2: %d\n", pib_per_capita > pib_per_capita2);
    printf("Super Poder: Carta1 > Carta2: %d\n", super_poder > super_poder2);
    
    if (super_poder > super_poder2) {
    printf("***VENCEDOR***\n Carta1\n");
    }else if (super_poder2 > super_poder){
    printf("***VENCEDOR***\n Carta2\n");
    }else {
        printf("*** EMPATE ***\n");
 }
 
    return 0;
 }