#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1, pib1;
    int pontos1;

    // Variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2, pib2;
    int pontos2;

    // Cadastro da primeira carta
    printf("Digite o estado da primeira carta: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("\nDigite o estado da segunda carta: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Exibindo as informações
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}
