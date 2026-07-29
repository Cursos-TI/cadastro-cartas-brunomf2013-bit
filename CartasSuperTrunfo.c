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

    int opcao;
    int escolha;

    Carta carta1, carta2;

    printf("=====================================\n");
    printf("         SUPER TRUNFO CIDADES\n");
    printf("=====================================\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            break;

        case 2:
            printf("\nREGRAS DO JOGO\n");
            printf("- Cadastre duas cartas.\n");
            printf("- Escolha um atributo para comparar.\n");
            printf("- A carta com o melhor valor vence.\n");
            printf("- Na densidade populacional, vence o MENOR valor.\n");
            return 0;

        case 3:
            printf("Jogo encerrado!\n");
            return 0;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    //==========================
    // Cadastro Carta 1
    //==========================

    printf("\n===== CARTA 1 =====\n");

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

    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    //==========================
    // Cadastro Carta 2
    //==========================

    printf("\n===== CARTA 2 =====\n");

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

    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    //==========================
    // Calculos
    //==========================

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta1.superPoder = carta1.populacao +
                         carta1.area +
                         carta1.pib +
                         carta1.pontosTuristicos +
                         carta1.pibPerCapita +
                         (1.0 / carta1.densidade);

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;
    carta2.superPoder = carta2.populacao +
                         carta2.area +
                         carta2.pib +
                         carta2.pontosTuristicos +
                         carta2.pibPerCapita +
                         (1.0 / carta2.densidade);

    //==========================
    // Escolha do atributo
    //==========================

    printf("\n==============================\n");
    printf("ESCOLHA O ATRIBUTO\n");
    printf("==============================\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("\n==============================\n");
    printf("RESULTADO DA COMPARACAO\n");
    printf("==============================\n");

    switch(escolha)
    {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s = %lu\n", carta1.nome, carta1.populacao);
            printf("%s = %lu\n", carta2.nome, carta2.populacao);

            if(carta1.populacao > carta2.populacao)
                printf("\nVENCEDOR: %s\n", carta1.nome);
            else if(carta2.populacao > carta1.populacao)
                printf("\nVENCEDOR: %s\n", carta2.nome);
            else
                printf("\nEMPATE!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s = %.2f km2\n", carta1.nome, carta1.area);
            printf("%s = %.2f km2\n", carta2.nome, carta2.area);

            if(carta1.area > carta2.area)
                printf("\nVENCEDOR: %s\n", carta1.nome);
            else if(carta2.area > carta1.area)
                printf("\nVENCEDOR: %s\n", carta2.nome);
            else
                printf("\nEMPATE!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s = %.2f\n", carta1.nome, carta1.pib);
            printf("%s = %.2f\n", carta2.nome, carta2.pib);

            if(carta1.pib > carta2.pib)
                printf("\nVENCEDOR: %s\n", carta1.nome);
            else if(carta2.pib > carta1.pib)
                printf("\nVENCEDOR: %s\n", carta2.nome);
            else
                printf("\nEMPATE!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s = %d\n", carta1.nome, carta1.pontosTuristicos);
            printf("%s = %d\n", carta2.nome, carta2.pontosTuristicos);

            if(carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("\nVENCEDOR: %s\n", carta1.nome);
            else if(carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("\nVENCEDOR: %s\n", carta2.nome);
            else
                printf("\nEMPATE!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s = %.2f\n", carta1.nome, carta1.densidade);
            printf("%s = %.2f\n", carta2.nome, carta2.densidade);

            if(carta1.densidade < carta2.densidade)
                printf("\nVENCEDOR: %s\n", carta1.nome);
            else if(carta2.densidade < carta1.densidade)
                printf("\nVENCEDOR: %s\n", carta2.nome);
            else
                printf("\nEMPATE!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s = %.2f\n", carta1.nome, carta1.pibPerCapita);
            printf("%s = %.2f\n", carta2.nome, carta2.pibPerCapita);

            if(carta1.pibPerCapita > carta2.pibPerCapita)
                printf("\nVENCEDOR: %s\n", carta1.nome);
            else if(carta2.pibPerCapita > carta1.pibPerCapita)
                printf("\nVENCEDOR: %s\n", carta2.nome);
            else
                printf("\nEMPATE!\n");
            break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s = %.2f\n", carta1.nome, carta1.superPoder);
            printf("%s = %.2f\n", carta2.nome, carta2.superPoder);

            if(carta1.superPoder > carta2.superPoder)
                printf("\nVENCEDOR: %s\n", carta1.nome);
            else if(carta2.superPoder > carta1.superPoder)
                printf("\nVENCEDOR: %s\n", carta2.nome);
            else
                printf("\nEMPATE!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}


   




















