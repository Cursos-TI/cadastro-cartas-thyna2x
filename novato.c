#include <stdio.h>
#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // valores calculados
    float densidade;
    float pibPerCapita;

} Carta;

int main() {

    // ---------- CARTA 1 ----------
    Carta carta1 = {
        "SP",
        "A01",
        "Sao Paulo",
        12300000,
        1521.0,
        699.0,
        50
    };

    // ---------- CARTA 2 ----------
    Carta carta2 = {
        "RJ",
        "B02",
        "Rio de Janeiro",
        6000000,
        1182.0,
        300.0,
        30
    };

    // ---------- CÁLCULOS ----------
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ------------------------------------------------
    // ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO
    // Altere o número abaixo para escolher o atributo:
    // 1 = População
    // 2 = Área
    // 3 = PIB
    // 4 = Densidade Populacional
    // 5 = PIB per capita
    // ------------------------------------------------
    int atributo = 1;

    printf("Comparacao de cartas:\n\n");

    // ---------- COMPARAÇÕES ----------
    if (atributo == 1) {
        printf("Atributo: Populacao\n\n");

        printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);

        if (carta1.populacao > carta2.populacao)
            printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else if (carta2.populacao > carta1.populacao)
            printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        else
            printf("\nResultado: Empate!\n");
    }

    else if (atributo == 2) {
        printf("Atributo: Area\n\n");

        printf("Carta 1: %.2f\n", carta1.area);
        printf("Carta 2: %.2f\n", carta2.area);

        if (carta1.area > carta2.area)
            printf("\nResultado: Carta 1 venceu!\n");
        else if (carta2.area > carta1.area)
            printf("\nResultado: Carta 2 venceu!\n");
        else
            printf("\nResultado: Empate!\n");
    }

    else if (atributo == 3) {
        printf("Atributo: PIB\n\n");

        printf("Carta 1: %.2f\n", carta1.pib);
        printf("Carta 2: %.2f\n", carta2.pib);

        if (carta1.pib > carta2.pib)
            printf("\nResultado: Carta 1 venceu!\n");
        else if (carta2.pib > carta1.pib)
            printf("\nResultado: Carta 2 venceu!\n");
        else
            printf("\nResultado: Empate!\n");
    }

    else if (atributo == 4) {
        printf("Atributo: Densidade Populacional\n\n");

        printf("Carta 1: %.2f\n", carta1.densidade);
        printf("Carta 2: %.2f\n", carta2.densidade);

        // REGRA ESPECIAL → MENOR vence
        if (carta1.densidade < carta2.densidade)
            printf("\nResultado: Carta 1 venceu!\n");
        else if (carta2.densidade < carta1.densidade)
            printf("\nResultado: Carta 2 venceu!\n");
        else
            printf("\nResultado: Empate!\n");
    }

    else if (atributo == 5) {
        printf("Atributo: PIB per capita\n\n");

        printf("Carta 1: %.6f\n", carta1.pibPerCapita);
        printf("Carta 2: %.6f\n", carta2.pibPerCapita);

        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("\nResultado: Carta 1 venceu!\n");
        else if (carta2.pibPerCapita > carta1.pibPerCapita)
            printf("\nResultado: Carta 2 venceu!\n");
        else
            printf("\nResultado: Empate!\n");
    }

    else {
        printf("Atributo invalido.\n");
    }

    return 0;
}
