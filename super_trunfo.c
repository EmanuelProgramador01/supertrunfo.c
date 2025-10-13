#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura representando uma carta de país
struct Carta {
    char nome[30];
    float populacao;           // em milhões
    float area;                // em km²
    float pib;                 // em trilhões de dólares
    float densidade;           // habitantes por km²
};

int main() {
    // Cartas pré-definidas
    struct Carta carta1 = {"Brasil", 214.3, 8515.767, 2.08, 25.2};
    struct Carta carta2 = {"Japão", 125.7, 377.975, 4.23, 332.5};

    int atributo1, atributo2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma1, soma2;

    printf("===== SUPER TRUNFO: NÍVEL MESTRE =====\n\n");
    printf("Carta 1: %s\nCarta 2: %s\n\n", carta1.nome, carta2.nome);

    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População (maior vence)\n");
    printf("2 - Área (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Densidade Demográfica (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Menu dinâmico (não mostra o mesmo atributo de novo)
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    switch (atributo1) {
        case 1:
            printf("2 - Área (maior vence)\n");
            printf("3 - PIB (maior vence)\n");
            printf("4 - Densidade Demográfica (menor vence)\n");
            break;
        case 2:
            printf("1 - População (maior vence)\n");
            printf("3 - PIB (maior vence)\n");
            printf("4 - Densidade Demográfica (menor vence)\n");
            break;
        case 3:
            printf("1 - População (maior vence)\n");
            printf("2 - Área (maior vence)\n");
            printf("4 - Densidade Demográfica (menor vence)\n");
            break;
        case 4:
            printf("1 - População (maior vence)\n");
            printf("2 - Área (maior vence)\n");
            printf("3 - PIB (maior vence)\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    // Impede o jogador de repetir o mesmo atributo
    if (atributo1 == atributo2) {
        printf("\nVocê escolheu o mesmo atributo duas vezes. Reinicie o jogo.\n");
        return 0;
    }

    // Pega os valores dos atributos escolhidos
    switch (atributo1) {
        case 1: valor1_c1 = carta1.populacao; valor1_c2 = carta2.populacao; break;
        case 2: valor1_c1 = carta1.area; valor1_c2 = carta2.area; break;
        case 3: valor1_c1 = carta1.pib; valor1_c2 = carta2.pib; break;
        case 4: valor1_c1 = carta1.densidade; valor1_c2 = carta2.densidade; break;
    }

    switch (atributo2) {
        case 1: valor2_c1 = carta1.populacao; valor2_c2 = carta2.populacao; break;
        case 2: valor2_c1 = carta1.area; valor2_c2 = carta2.area; break;
        case 3: valor2_c1 = carta1.pib; valor2_c2 = carta2.pib; break;
        case 4: valor2_c1 = carta1.densidade; valor2_c2 = carta2.densidade; break;
    }

    // Mostra os valores escolhidos
    printf("\n===== Comparação =====\n");
    printf("Carta 1 (%s): Atributo 1 = %.2f | Atributo 2 = %.2f\n", carta1.nome, valor1_c1, valor2_c1);
    printf("Carta 2 (%s): Atributo 1 = %.2f | Atributo 2 = %.2f\n", carta2.nome, valor1_c2, valor2_c2);

    // Lógica de quem vence por atributo
    int resultado1, resultado2;

    // Atributo 1
    resultado1 = (atributo1 == 4) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    // Atributo 2
    resultado2 = (atributo2 == 4) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);

    // Soma dos atributos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n");
    printf("%s = %.2f\n", carta1.nome, soma1);
    printf("%s = %.2f\n", carta2.nome, soma2);

    // Resultado final
    if (soma1 > soma2)
        printf("\n🏆 %s venceu a rodada!\n", carta1.nome);
    else if (soma2 > soma1)
        printf("\n🏆 %s venceu a rodada!\n", carta2.nome);
    else
        printf("\n⚖ Empate!\n");

    return 0;
}
