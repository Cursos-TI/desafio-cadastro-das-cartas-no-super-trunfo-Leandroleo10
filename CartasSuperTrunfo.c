#include <stdio.h>
#include <string.h>
int main () {

    // Declaração de variáveis com nomes descritivos
    char estado, estado2, codigodacarta2[50], codigodacarta[50], cidade[50], cidade2[50];
    int populacao, populacao2, pontoturisticos2, pontoturisticos;
    float pib, pib2, area2, area;

    // Entrada de dados da primeira carta
    printf("carta1\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    printf("código: ");
    scanf("%s", &codigodacarta);
    printf("Nome da cidade: ");
    getchar();
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;
    printf("população: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontoturisticos);

    // Entrada de dados da segunda carta
    printf("carta2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("código: ");
    scanf("%s", &codigodacarta2);
    printf("Nome da cidade: ");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade[strcspn(cidade2, "\n")] = 0;
    printf("população: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontoturisticos2);

    // Saída de dados da primeira carta
    printf("\ncarta1\n");
    printf("estado: %c\n", estado);
    printf("código: %s\n", codigodacarta);
    printf("nome da cidade: %s\n", cidade);
    printf("população: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontoturisticos);

    // Saída de dados de segunda carta
    printf("\ncarta2\n");
    printf("estado: %c\n", estado2);
    printf("código: %s\n", codigodacarta2);
    printf("nome da cidade: %s", cidade2);
    printf("população: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontoturisticos2);

    // Comparação entre os valores das cartas
    printf("\nComparação de população:\n");
    if(populacao > populacao2) {
        printf("%s tem mais habitanttes que %s\n", cidade, cidade2);
    }
    else if(populacao < populacao2) {
        printf("%s tem a mesma quantidade ded habitantes que %s\n", cidade2, cidade);
    }
    else {
        printf("%s e %s tem a mesma quantidade de habitantes\n", cidade, cidade2);
    }


    return 0;


}