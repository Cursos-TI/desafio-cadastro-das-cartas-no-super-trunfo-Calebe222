#include <stdio.h>

#define NUM_ESTADOS 8
#define CIDADES_POR_ESTADO 4

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void cadastrarCartas(Cidade cartas[NUM_ESTADOS * CIDADES_POR_ESTADO]) {
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int index = 0;
    
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 1; j <= CIDADES_POR_ESTADO; j++) {
            sprintf(cartas[index].codigo, "%c%02d", estados[i], j);
            printf("Cadastro da cidade %s:\n", cartas[index].codigo);
            printf("Populacao: ");
            scanf("%d", &cartas[index].populacao);
            printf("Area (km^2): ");
            scanf("%f", &cartas[index].area);
            printf("PIB (milhões): ");
            scanf("%f", &cartas[index].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[index].pontos_turisticos);
            index++;
        }
    }
}

void exibirCartas(Cidade cartas[NUM_ESTADOS * CIDADES_POR_ESTADO]) {
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < NUM_ESTADOS * CIDADES_POR_ESTADO; i++) {
        printf("\nCódigo: %s\n", cartas[i].codigo);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km^2\n", cartas[i].area);
        printf("PIB: %.2f milhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
    }
}

int main() {
    Cidade cartas[NUM_ESTADOS * CIDADES_POR_ESTADO];
    cadastrarCartas(cartas);
    exibirCartas(cartas);
    return 0;
}
