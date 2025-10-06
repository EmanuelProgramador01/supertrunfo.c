#include <stdio.h>

int main() {
    // Programa: Super Trunfo - Nível Aventureiro
    // Objetivo: Permitir que o jogador escolha um atributo para comparar entre duas cartas.

    // Declaração das cartas
    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 2490.0; // em bilhões de dólares
    int pontos1 = 20;
    float densidade1 = populacao1 / area1;

    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontos2 = 15;
    float densidade2 = populacao2 / area2;

    int opcao;

    // Menu de seleção
    printf("===== SUPER TRUNFO: BATALHA DE PAISES =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo para comparacao: ");
    scanf("%d", &opcao);

    printf("\n--- Comparando %s e %s ---\n", pais1, pais2);

    // Estrutura switch para escolher o atributo
    switch (opcao) {
        case 1:
            printf("Populacao: %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Area: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turisticos: %d vs %d\n", pontos1, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demografica: %.2f vs %.2f\n", densidade1, densidade2);
            // Aqui a lógica é invertida: vence quem tiver MENOR densidade
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
    }

    return 0;
}
