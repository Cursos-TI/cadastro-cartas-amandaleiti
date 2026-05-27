#include <stdio.h>

int main() {

    int carta1, turistico1;
    unsigned long int populacao1;
    char estado1, cod1[4], cidade1[20];
    float areakm1, pib1, densidade1, percapita1, superpoder1;

    printf("=================================================\n");
    printf("CARTA 01\n");
    printf("=================================================\n");

    printf("Carta: ");
    scanf("%d", &carta1);

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%3s", cod1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &areakm1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &turistico1);

    printf("\nCarta 1: %d\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", cod1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", areakm1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numeros de Pontos Turisticos: %d\n", turistico1);

    densidade1 = (float)populacao1 / areakm1;
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);

    percapita1 = (pib1 * 1000000000) / populacao1;
    printf("PIB per Capita: %.2f reais\n", percapita1);

    superpoder1 = (float)populacao1 + areakm1 + pib1 + turistico1 + percapita1 + (1.0f / densidade1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("=================================================\n");
    printf("CARTA 02\n");
    printf("=================================================\n");

    int carta2, turistico2;
    unsigned long int populacao2;
    char estado2, cod2[4], cidade2[20];
    float areakm2, pib2, densidade2, percapita2, superpoder2;

    printf("Carta: ");
    scanf("%d", &carta2);

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%3s", cod2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &areakm2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &turistico2);

    printf("\nCarta 2: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", cod2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", areakm2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numeros de Pontos Turisticos: %d\n", turistico2);

    densidade2 = (float)populacao2 / areakm2;
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);

    percapita2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per Capita: %.2f reais\n", percapita2);

    superpoder2 = (float)populacao2 + areakm2 + pib2 + turistico2 + percapita2 + (1.0f / densidade2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\n===== Comparacao de Cartas =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", areakm1 > areakm2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", turistico1 > turistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
