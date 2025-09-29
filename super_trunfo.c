#include <stdio.h>

int main() {
    // Programa simples de comparação de cartas do Super Trunfo (nível básico)
    // As cartas são pré-definidas diretamente no código, sem interação com o usuário.

    // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    // Exibição dos dados das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos2);

    // Comparação de um atributo (exemplo: população)
    printf("Comparacao de Cartas:\n");

    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else {
        printf("Populacao: Carta 2 venceu (0)\n");
    }

    return 0;
}
