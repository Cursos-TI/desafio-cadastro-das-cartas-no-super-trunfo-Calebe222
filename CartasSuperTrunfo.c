#include <stdio.h>
#include <string.h>

#define NUM_ESTADOS 8
#define CIDADES_POR_ESTADO 4

// Estrutura para armazenar os dados das cidades
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Cidade;

// Função para cadastrar os dados das cidades
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
            printf("PIB (milhoes): ");
            scanf("%f", &cartas[index].pib);
            printf("Numero de pontos turisticos: ");
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
            
            // Cálculo do Super Poder
            cartas[index].super_poder = cartas[index].populacao + cartas[index].area + cartas[index].pib + cartas[index].pontos_turisticos;
            
            index++;
        }
    }
}

// Função para exibir os dados das cidades
void exibirCartas(Cidade cartas[NUM_ESTADOS * CIDADES_POR_ESTADO]) {
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < NUM_ESTADOS * CIDADES_POR_ESTADO; i++) {
        printf("\nCodigo: %s\n", cartas[i].codigo);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km^2\n", cartas[i].area);
        printf("PIB: %.2f milhoes\n", cartas[i].pib);
        printf("Pontos turisticos: %d\n", cartas[i].pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km^2\n", cartas[i].densidade_populacional);
        printf("PIB per Capita: %.2f milhoes/hab\n", cartas[i].pib_per_capita);
        printf("Super Poder: %.2f\n", cartas[i].super_poder);
    }
}

// Função para comparar duas cartas
void compararCartas(Cidade c1, Cidade c2) {
    printf("\nComparacao entre %s e %s:\n", c1.codigo, c2.codigo);
    printf("Populacao: %s\n", (c1.populacao > c2.populacao) ? c1.codigo : c2.codigo);
    printf("Area: %s\n", (c1.area > c2.area) ? c1.codigo : c2.codigo);
    printf("PIB: %s\n", (c1.pib > c2.pib) ? c1.codigo : c2.codigo);
    printf("Pontos turisticos: %s\n", (c1.pontos_turisticos > c2.pontos_turisticos) ? c1.codigo : c2.codigo);
    printf("Densidade Populacional: %s (menor vence)\n", (c1.densidade_populacional < c2.densidade_populacional) ? c1.codigo : c2.codigo);
    printf("PIB per Capita: %s\n", (c1.pib_per_capita > c2.pib_per_capita) ? c1.codigo : c2.codigo);
    printf("Super Poder: %s\n", (c1.super_poder > c2.super_poder) ? c1.codigo : c2.codigo);
}

int main() {
    Cidade cartas[NUM_ESTADOS * CIDADES_POR_ESTADO];
    cadastrarCartas(cartas);
    exibirCartas(cartas);
    
    // Comparação entre duas cartas
    int c1, c2;
    printf("\nEscolha duas cartas para comparar (0 a %d): ", NUM_ESTADOS * CIDADES_POR_ESTADO - 1);
    scanf("%d %d", &c1, &c2);
    
    if (c1 >= 0 && c1 < NUM_ESTADOS * CIDADES_POR_ESTADO && c2 >= 0 && c2 < NUM_ESTADOS * CIDADES_POR_ESTADO) {
        compararCartas(cartas[c1], cartas[c2]);
    } else {
        printf("Indices invalidos!\n");
    }
    
    return 0;
}
