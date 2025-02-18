#include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
        // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        
        // Cadastro das Cartas:
        // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
        // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        
        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    int main() {
        printf("Carta01\n");
    
        char estado [50];
        char codigo[2];
        char  nome [50];
        int  populacao;
        double  pib;
        float  area;
        int pontos_turisticos;
    
    
        printf("ESTADO\n");
        scanf("%s", estado);
        printf("Estado e: %s\n", estado);
    
        printf("CODIGO\n");
        scanf("%s", codigo);
        printf("Codigo e: %s\n", codigo);
    
        printf ("NOME DA CIDADE\n");
        scanf("%s", nome);
        printf("Nome e: %s\n", nome);
    
        printf("POPULACAO\n");
        scanf("%d", &populacao);
        printf("Populacao e: %d\n", populacao);
    
        printf("PIB\n");
        scanf("%lf", &pib);
        printf("Pib e: %lf\n", pib);
    
        printf("AREA\n");
        scanf("%f", &area);
        printf("Area e: %f\n", area);
    
        printf("NUMERO DE PONTOS TURISTICOS\n");
        scanf("%d", &pontos_turisticos);
        printf("Numero de pontos turisticos e: %d\n", pontos_turisticos);
    
    
    
    
    
    
        printf("Carta02\n");
    
        char estado2 [50];
        char codigo2 [2];
        char  nome2 [50];
        int  populacao2;
        double  pib2;
        float  area2;
        int pontos_turisticos2;
    
    
        printf("ESTADO2\n");
        scanf("%s", estado2);
        printf("Estado2 e: %s\n", estado2);
    
        printf("CODIGO2\n");
        scanf("%s", codigo2);
        printf("Codigo2 e: %s\n", codigo2);
    
        printf ("NOME DA CIDADE2\n");
        scanf("%s", nome2);
        printf("Nome2 e: %s\n", nome2);
    
        printf("POPULACAO2\n");
        scanf("%d", &populacao2);
        printf("Populacao2 e: %d\n", populacao2);
    
        printf("PIB2\n");
        scanf("%lf", &pib2);
        printf("Pib2 e: %lf\n", pib2);
    
        printf("AREA2\n");
        scanf("%f", &area2);
        printf("Area2 e: %f\n", area2);
    
        printf("NUMERO DE PONTOS TURISTICOS2\n");
        scanf("%d", &pontos_turisticos2);
        printf("Numero de pontos turisticos2 e: %d\n", pontos_turisticos2);
    
    
       //executar 2 vezes para funcionar :)
     
        return 0;
    
    
    }