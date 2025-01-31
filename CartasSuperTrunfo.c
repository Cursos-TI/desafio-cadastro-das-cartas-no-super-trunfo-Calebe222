#include <stdio.h>

#define NUM_ESTADOS 8
#define CIDADES_POR_ESTADO 4

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
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
            
            // Cálculo das propriedades adicionais
            if (cartas[index].area > 0) {
                cartas[index].densidade_populacional = cartas[index].populacao / cartas[index].area;
            } else {
                cartas[index].densidade_populacional = 0;
            }
            
            if (cartas[index].populacao > 0) {
                cartas[index].pib_per_capita = cartas[index].pib / cartas[index].populacao;
            } else {
                cartas[index].pib_per_capita = 0;
            }
            
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
        printf("Densidade Populacional: %.2f hab/km^2\n", cartas[i].densidade_populacional);
        printf("PIB per Capita: %.2f milhões/hab\n", cartas[i].pib_per_capita);
    }
}

int main() {
    Cidade cartas[NUM_ESTADOS * CIDADES_POR_ESTADO];
    cadastrarCartas(cartas);
    exibirCartas(cartas);
    return 0;
}
