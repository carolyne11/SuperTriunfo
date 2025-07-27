#include <stdio.h>

int main ()

{
char estado[1] , estado2[1];
    char codigo[4] , codigo2[4];
    char cidade[30] , cidade2 [30];
    int populacao , populacao2 ;
    float area , area2;
    float pib , pib2;
    int pontos,pontos2;

    

    printf("Carta 1\n");

    printf("Digite a letra do estado : \n");
    scanf(" %1s", estado);  // %1s é o numero de caracter permitido

    printf("Digite o código da carta Ex A01 : \n");
    scanf(" %3s", codigo);

    printf("Digite o nome da cidade : \n");
    scanf(" %30s", cidade);  

    printf("Digite o numero de habitantes : \n");
    scanf(" %d", &populacao);

    printf("a area em Km² da cidade em quilometros quadrados : \n");
    scanf(" %f", &area);

    printf("produto interno bruto da cidade : \n");
    scanf(" %f", &pib);

    printf("Quantidade de pontos turisticos da cidade : \n");
    scanf(" %d", &pontos); 

    // carta 2
printf("Carta 2\n");

    printf("Digite a letra do estado : \n");
    scanf(" %1s", estado2);  // %1s é o numero de caracter permitido

    printf("Digite o código da carta Ex A02 : \n");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade : \n");
    scanf(" %30s", cidade2);  

    printf("Digite o numero de habitantes : \n");
    scanf(" %d", &populacao2);

    printf("a area em Km² da cidade em quilometros quadrados : \n");
    scanf(" %f", &area2);

    printf("produto interno bruto da cidade : \n");
    scanf(" %f", &pib2);

    printf("Quantidade de pontos turisticos da cidade : \n");
    scanf(" %d", &pontos2); 


    printf("\n--- Resultado ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;

}