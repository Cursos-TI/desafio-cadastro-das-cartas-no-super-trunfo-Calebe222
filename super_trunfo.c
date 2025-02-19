#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {
    // DECLARAÇÃO DAS VARIÁVEIS

    // Variáveis para armazenar os dados da primeira carta
    char estado1;             // Armazena a letra do estado (A-H)
    char codigo1[4];          // Código da carta (ex: A01)
    char cidade1[50];         // Nome da cidade
    int populacao1;           // População da cidade
    float area1;              // Área da cidade em km²
    double pib1;              // PIB da cidade em bilhões
    int pontos_turisticos1;   // Número de pontos turísticos

    // Variáveis para armazenar os dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;

    // ==============================
    // ENTRADA DE DADOS - CARTA 1
    // ==============================
    printf("Digite os dados da primeira carta:\n");

    // Estado (apenas uma letra entre A e H)
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    // Código da carta (ex: A01, B02)
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    // Limpeza do buffer do teclado antes de ler a string completa
    while (getchar() != '\n');

    // Nome da cidade (lê até encontrar uma quebra de linha)
    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade1);

    // População da cidade
    printf("População: ");
    scanf("%d", &populacao1);

    // Área em km²
    printf("Área (km²): ");
    scanf("%f", &area1);

    // PIB em bilhões (double para maior precisão)
    printf("PIB (em bilhões): ");
    scanf("%lf", &pib1);

    // Número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Limpeza do buffer do teclado antes de ler a próxima string
    while (getchar() != '\n');

    // ==============================
    // ENTRADA DE DADOS - CARTA 2
    // ==============================
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    while (getchar() != '\n');  // Limpa o buffer do teclado

    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // EXIBIÇÃO DAS CARTAS
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;  // Indica que o programa terminou com sucesso
}
