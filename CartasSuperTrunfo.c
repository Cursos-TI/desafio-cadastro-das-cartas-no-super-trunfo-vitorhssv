#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // VARIÁVEIS:
    // Variáveis pra carta 1
    int populacao_1, pontos_turisticos_1;
    float area_1, pib_1, densidade_populacional_1, pib_per_capita_1, super_poder_1;

    // Variáveis pra carta 2
    int populacao_2, pontos_turisticos_2;
    float area_2, pib_2, densidade_populacional_2, pib_per_capita_2, super_poder_2;

    // CADASTROS:
    // Cadastro da carta 1
    printf("CADASTRO DA CARTA 1");
    printf("\nDigite a população da carta: ");
    scanf("%d", &populacao_1);

    printf("\nDigite a área da carta: ");
    scanf("%f", &area_1);

    printf("\nDigite o PIB da carta: ");
    scanf("%f", &pib_1);

    printf("\nDigite a quantidade de pontos turísticos da carta: ");
    scanf("%d", &pontos_turisticos_1);

    densidade_populacional_1 = (float)populacao_1 / area_1;
    pib_per_capita_1 = pib_1 / (float)populacao_1;
    super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turisticos_1 + pib_per_capita_1 - densidade_populacional_1;

    // Cadastro da carta 2
    printf("\nCADASTRO DA CARTA 2");
    printf("\nDigite a população da carta: ");
    scanf("%d", &populacao_2);

    printf("\nDigite a área da carta: ");
    scanf("%f", &area_2);

    printf("\nDigite o PIB da carta: ");
    scanf("%f", &pib_2);

    printf("\nDigite a quantidade de pontos turísticos da carta: ");
    scanf("%d", &pontos_turisticos_2);

    densidade_populacional_2 = (float)populacao_2 / area_2;
    pib_per_capita_2 = pib_2 / (float)populacao_2;
    super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turisticos_2 + pib_per_capita_2 - densidade_populacional_2;

    // EXIBIÇÕES:
    // Exibição da carta 1
    printf("\nCARTA 1\n");
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);
    printf("Super poder: %.2f\n", super_poder_1);

    // Exibição da carta 2
    printf("\nCARTA 2\n");
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);
    printf("Super poder: %.2f\n", super_poder_2);

    // Comparação das duas cartas
    printf("\nCOMPARAÇÃO\n");
    printf("População: carta %d venceu! (%d)\n", (populacao_2 > populacao_1) + 1, populacao_2 > populacao_1);
    printf("Área: carta %d venceu! (%d)\n", (area_2 > area_1) + 1, area_2 > area_1);
    printf("PIB: carta %d venceu! (%d)\n", (pib_2 > pib_1) + 1, pib_2 > pib_1);
    printf("Pontos turísticos: carta %d venceu! (%d)\n", (pontos_turisticos_2 > pontos_turisticos_1) + 1, pontos_turisticos_2 > pontos_turisticos_1);
    printf("Densidade populacional: carta %d venceu! (%d)\n", (densidade_populacional_2 < densidade_populacional_1) + 1, densidade_populacional_2 < densidade_populacional_1);
    printf("PIB per capita: carta %d venceu! (%d)\n", (pib_per_capita_2 > pib_per_capita_1) + 1, pib_per_capita_2 > pib_per_capita_1);
    printf("Super poder: carta %d venceu! (%d)\n", (super_poder_2 > super_poder_1) + 1, super_poder_2 > super_poder_1);

    return 0;
}
