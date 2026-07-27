#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[10];
    char nome[50];

    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    float densidade;
    float pibPerCapita;
    float superPoder;

} Carta;

int main() {

    Carta carta1, carta2;

    // =======================
    // Cadastro da Carta 1
    // =======================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", carta1.estado);

    printf("Codigo: ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);

    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // =======================
    // Cadastro da Carta 2
    // =======================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", carta2.estado);

    printf("Codigo: ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);

    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // =======================
    // Cálculos Carta 1
    // =======================

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta1.superPoder =
        (float)carta1.populacao +
        carta1.area +
        carta1.pib +
        carta1.pontosTuristicos +
        carta1.pibPerCapita +
        (1.0f / carta1.densidade);

    // =======================
    // Cálculos Carta 2
    // =======================

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    carta2.superPoder =
        (float)carta2.populacao +
        carta2.area +
        carta2.pib +
        carta2.pontosTuristicos +
        carta2.pibPerCapita +
        (1.0f / carta2.densidade);

    // =======================
    // Comparações
    // =======================

    printf("\n=============================\n");
    printf("Comparacao de Cartas\n");
    printf("=============================\n\n");

    printf("Populacao: %d\n", carta1.populacao > carta2.populacao);

    printf("Area: %d\n", carta1.area > carta2.area);

    printf("PIB: %d\n", carta1.pib > carta2.pib);

    printf("Pontos Turisticos: %d\n",
           carta1.pontosTuristicos > carta2.pontosTuristicos);

    // Menor densidade vence
    printf("Densidade Populacional: %d\n",
           carta1.densidade < carta2.densidade);

    printf("PIB per Capita: %d\n",
           carta1.pibPerCapita > carta2.pibPerCapita);

    printf("Super Poder: %d\n",
           carta1.superPoder > carta2.superPoder);

    printf("1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence");

    return 0;
}


   




















