#include <stdio.h>

int main() {

    // =====================================================
    // CARTA 1
    // =====================================================

    char estado1 = 'A';
    char codigo1[] = "A01";
    char pais1[] = "Brasil";

    int populacao1 = 203000000;
    float area1 = 8515767.00;
    float pib1 = 2173.00;
    int pontosTuristicos1 = 50;

    float pibPerCapita1;
    float densidade1;


    // =====================================================
    // CARTA 2
    // =====================================================

    char estado2 = 'B';
    char codigo2[] = "B01";
    char pais2[] = "Argentina";

    int populacao2 = 46000000;
    float area2 = 2780400.00;
    float pib2 = 640.00;
    int pontosTuristicos2 = 30;

    float pibPerCapita2;
    float densidade2;


    // =====================================================
    // CÁLCULOS
    // =====================================================

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    densidade1 = populacao1 / area1;

    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    densidade2 = populacao2 / area2;


    // =====================================================
    // EXIBIÇÃO DAS CARTAS
    // =====================================================

    printf("\n========================================\n");
    printf("          SUPER TRUNFO\n");
    printf("========================================\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Pais: %s\n", pais1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Densidade demografica: %.2f hab/km²\n", densidade1);

    printf("\n--- CARTA 2 ---\n");
    printf("Pais: %s\n", pais2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Densidade demografica: %.2f hab/km²\n", densidade2);


    // =====================================================
    // PRIMEIRO MENU
    // =====================================================

    int atributo1;

    printf("\n========================================\n");
    printf("       ESCOLHA O PRIMEIRO ATRIBUTO\n");
    printf("========================================\n");

    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - PIB per capita\n");
    printf("6 - Densidade demografica\n");

    printf("\nDigite sua escolha: ");
    scanf("%d", &atributo1);


    // =====================================================
    // VALIDAÇÃO DO PRIMEIRO ATRIBUTO
    // =====================================================

    switch (atributo1) {

        case 1:
            printf("\nPrimeiro atributo: Populacao\n");
            break;

        case 2:
            printf("\nPrimeiro atributo: Area\n");
            break;

        case 3:
            printf("\nPrimeiro atributo: PIB\n");
            break;

        case 4:
            printf("\nPrimeiro atributo: Pontos turisticos\n");
            break;

        case 5:
            printf("\nPrimeiro atributo: PIB per capita\n");
            break;

        case 6:
            printf("\nPrimeiro atributo: Densidade demografica\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }


    // =====================================================
    // SEGUNDO MENU
    // O PRIMEIRO ATRIBUTO NÃO APARECE NOVAMENTE
    // =====================================================

    int atributo2;

    printf("\n========================================\n");
    printf("       ESCOLHA O SEGUNDO ATRIBUTO\n");
    printf("========================================\n");

    switch (atributo1) {

        case 1:
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turisticos\n");
            printf("5 - PIB per capita\n");
            printf("6 - Densidade demografica\n");
            break;

        case 2:
            printf("1 - Populacao\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turisticos\n");
            printf("5 - PIB per capita\n");
            printf("6 - Densidade demografica\n");
            break;

        case 3:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("4 - Pontos turisticos\n");
            printf("5 - PIB per capita\n");
            printf("6 - Densidade demografica\n");
            break;

        case 4:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("5 - PIB per capita\n");
            printf("6 - Densidade demografica\n");
            break;

        case 5:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turisticos\n");
            printf("6 - Densidade demografica\n");
            break;

        case 6:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turisticos\n");
            printf("5 - PIB per capita\n");
            break;
    }

    printf("\nDigite sua escolha: ");
    scanf("%d", &atributo2);


    // =====================================================
    // VERIFICA SE O SEGUNDO ATRIBUTO É VÁLIDO
    // =====================================================

    if (atributo2 < 1 || atributo2 > 6) {

        printf("\nOpcao invalida!\n");
        return 0;
    }

    if (atributo1 == atributo2) {

        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }


    // =====================================================
    // VARIÁVEIS PARA OS VALORES ESCOLHIDOS
    // =====================================================

    float valor1Carta1 = 0;
    float valor1Carta2 = 0;

    float valor2Carta1 = 0;
    float valor2Carta2 = 0;

    char nomeAtributo1[50];
    char nomeAtributo2[50];


    // =====================================================
    // SWITCH DO PRIMEIRO ATRIBUTO
    // =====================================================

    switch (atributo1) {

        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            sprintf(nomeAtributo1, "Populacao");
            break;

        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            sprintf(nomeAtributo1, "Area");
            break;

        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            sprintf(nomeAtributo1, "PIB");
            break;

        case 4:
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            sprintf(nomeAtributo1, "Pontos turisticos");
            break;

        case 5:
            valor1Carta1 = pibPerCapita1;
            valor1Carta2 = pibPerCapita2;
            sprintf(nomeAtributo1, "PIB per capita");
            break;

        case 6:
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            sprintf(nomeAtributo1, "Densidade demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }


    // =====================================================
    // SWITCH DO SEGUNDO ATRIBUTO
    // =====================================================

    switch (atributo2) {

        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            sprintf(nomeAtributo2, "Populacao");
            break;

        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            sprintf(nomeAtributo2, "Area");
            break;

        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            sprintf(nomeAtributo2, "PIB");
            break;

        case 4:
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            sprintf(nomeAtributo2, "Pontos turisticos");
            break;

        case 5:
            valor2Carta1 = pibPerCapita1;
            valor2Carta2 = pibPerCapita2;
            sprintf(nomeAtributo2, "PIB per capita");
            break;

        case 6:
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            sprintf(nomeAtributo2, "Densidade demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }


    // =====================================================
    // COMPARAÇÃO DO PRIMEIRO ATRIBUTO
    // =====================================================

    int vencedorAtributo1;

    if (atributo1 == 6) {

        // Densidade: MENOR valor vence

        vencedorAtributo1 =
            (valor1Carta1 < valor1Carta2) ? 1 :
            (valor1Carta2 < valor1Carta1) ? 2 : 0;

    } else {

        // Outros atributos: MAIOR valor vence

        vencedorAtributo1 =
            (valor1Carta1 > valor1Carta2) ? 1 :
            (valor1Carta2 > valor1Carta1) ? 2 : 0;
    }


    // =====================================================
    // COMPARAÇÃO DO SEGUNDO ATRIBUTO
    // =====================================================

    int vencedorAtributo2;

    if (atributo2 == 6) {

        // Densidade: MENOR valor vence

        vencedorAtributo2 =
            (valor2Carta1 < valor2Carta2) ? 1 :
            (valor2Carta2 < valor2Carta1) ? 2 : 0;

    } else {

        // Outros atributos: MAIOR valor vence

        vencedorAtributo2 =
            (valor2Carta1 > valor2Carta2) ? 1 :
            (valor2Carta2 > valor2Carta1) ? 2 : 0;
    }


    // =====================================================
    // SOMA DOS DOIS ATRIBUTOS
    // =====================================================

    float somaCarta1 = valor1Carta1 + valor2Carta1;
    float somaCarta2 = valor1Carta2 + valor2Carta2;


    // =====================================================
    // EXIBIÇÃO DO RESULTADO
    // =====================================================

    printf("\n\n========================================\n");
    printf("          RESULTADO DA COMPARACAO\n");
    printf("========================================\n");

    printf("\nCarta 1: %s\n", pais1);
    printf("Carta 2: %s\n", pais2);

    printf("\n----------------------------------------\n");

    printf("Primeiro atributo: %s\n", nomeAtributo1);

    printf("%s: %.2f\n", pais1, valor1Carta1);
    printf("%s: %.2f\n", pais2, valor1Carta2);

    if (vencedorAtributo1 == 1) {
        printf("Vencedor: %s\n", pais1);
    } else if (vencedorAtributo1 == 2) {
        printf("Vencedor: %s\n", pais2);
    } else {
        printf("Resultado: Empate!\n");
    }


    printf("\n----------------------------------------\n");

    printf("Segundo atributo: %s\n", nomeAtributo2);

    printf("%s: %.2f\n", pais1, valor2Carta1);
    printf("%s: %.2f\n", pais2, valor2Carta2);

    if (vencedorAtributo2 == 1) {
        printf("Vencedor: %s\n", pais1);
    } else if (vencedorAtributo2 == 2) {
        printf("Vencedor: %s\n", pais2);
    } else {
        printf("Resultado: Empate!\n");
    }


    // =====================================================
    // SOMA
    // =====================================================

    printf("\n----------------------------------------\n");
    printf("SOMA DOS ATRIBUTOS\n");
    printf("----------------------------------------\n");

    printf("%s: %.2f\n", pais1, somaCarta1);
    printf("%s: %.2f\n", pais2, somaCarta2);


    // =====================================================
    // RESULTADO FINAL
    // =====================================================

    printf("\n========================================\n");

    if (somaCarta1 > somaCarta2) {

        printf("VENCEDOR: %s\n", pais1);

    } else if (somaCarta2 > somaCarta1) {

        printf("VENCEDOR: %s\n", pais2);

    } else {

        printf("EMPATE!\n");
    }

    printf("========================================\n");


    return 0;
}


   




















