#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Variáveis
    int populacao, pontos_turisticos;
    float area, pib, densidade_populacional, pib_per_capita;

    // Cadastro da carta 1
    printf("CADASTRO DA CARTA 1");
    printf("\nDigite a população da carta: ");
    scanf("%d", &populacao);

    printf("\nDigite a área da carta: ");
    scanf("%f", &area);

    printf("\nDigite o PIB da carta: ");
    scanf("%f", &pib);

    printf("\nDigite a quantidade de pontos turísticos da carta: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Exibição da carta 1
    printf("\nCARTA 1\n");
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    // Cadastro da carta 2
    printf("\nCADASTRO DA CARTA 2");
    printf("\nDigite a população da carta: ");
    scanf("%d", &populacao);

    printf("\nDigite a área da carta: ");
    scanf("%f", &area);

    printf("\nDigite o PIB da carta: ");
    scanf("%f", &pib);

    printf("\nDigite a quantidade de pontos turísticos da carta: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Exibição da carta 2
    printf("\nCARTA 2\n");
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    return 0;
}
