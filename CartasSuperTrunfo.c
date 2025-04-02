#include <stdio.h>

int main () {

    char estado, estado2, codigodacarta2[50], codigodacarta[50], cidade[50], cidade2[50];
    int populacao, populacao2, pontoturisticos2, pontoturisticos;
    float pib, pib2, area2, area;

    printf("carta1\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    printf("código: ");
    scanf("%s", &codigodacarta);
    printf("Nome da cidade: ");
    scanf("%s", &cidade);
    printf("população: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontoturisticos);

    printf("carta2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("código: ");
    scanf("%s", &codigodacarta2);
    printf("Nome da cidade: ");
    scanf("%s", &cidade2);
    printf("população: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontoturisticos2);

    printf("\ncarta1\n");
    printf("estado: %c\n", estado);
    printf("código: %s\n", codigodacarta);
    printf("nome da cidade: %s\n", cidade);
    printf("população: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontoturisticos);

    printf("\ncarta2\n");
    printf("estado: %c\n", estado2);
    printf("código: %s\n", codigodacarta2);
    printf("nome da cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontoturisticos2);
}