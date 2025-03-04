#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {
    // DECLARAÇÃO DAS VARIÁVEIS

    // Dados da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;  // Alterado para unsigned long int
    float area1;
    double pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Entrada de dados - Carta 1
    printf("Digite os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    while (getchar() != '\n');
    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1e9 / populacao1;  // PIB convertido para reais
    super_poder1 = populacao1 + area1 + (float)pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Entrada de dados - Carta 2
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    while (getchar() != '\n');
    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1e9 / populacao2;
    super_poder2 = populacao2 + area2 + (float)pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Comparação dos Atributos
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);  // Menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
