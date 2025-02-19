#include <stdio.h>


int main () {
    // declaração das variáveis para a primeira carta
    char estado1; 
    char codigo1[4]; 
    char cidade1[50];
    int populacao1; 
    float area1;
    float pib1;
    int pontos_turisticos1; 


    // declaração das variáveis para a segunda carta
    char estado2; 
    char codigo2[4]; 
    char cidade2[50];
    int populacao2;
    float area2; 
    float pib2;
    int pontos_turisticos2;

    // Entrada de dados da primeira carta 
    printf("Digite os dados da primeira carta: \n");
    printf("Estado (A-H): "); 
    scanf("%c", &estado1);
    printf("Código da carta: (ex: A01): "); 
    scanf("%s", codigo1);
    printf("Nome da Cidade: "); 
    scanf("%s\n", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Area (Km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", pib1);
    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da segunda carta
    printf("Digite os dados da segunda carta: ");
    printf("Estados (A-H): "); 
    scanf("%c", &estado2); 
    printf("Código da carta: (ex: B02): ");
    




}