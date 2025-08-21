#include <stdio.h>

int main() {
    // --- Dados da primeira carta ---
    char estado1[3];        // exemplo: "SP"
    char codigo1[4];        // exemplo: "A01"
    char cidade1[30];       // exemplo: "São Paulo"
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1, pibPerCapita1;

    // --- Dados da segunda carta ---
    char estado2[3];
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2, pibPerCapita2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Primeira Carta ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("Codigo da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Calculando extras
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Segunda Carta ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Calculando extras
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // --- Comparação ---
    // Escolha do atributo a ser comparado (definido no código)
    // Aqui vamos comparar POPULACAO
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
