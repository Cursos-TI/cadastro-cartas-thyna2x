#include <stdio.h>
#include <string.h>

// ---------- ESTRUTURA DA CARTA ----------
typedef struct {
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
} Carta;

// ---------- FUNÇÃO PARA CADASTRAR CARTA ----------
void cadastrarCarta(Carta *c) {

    printf("\nNome do pais: ");
    scanf(" %[^\n]", c->pais);

    printf("Populacao: ");
    scanf("%d", &c->populacao);

    printf("Area: ");
    scanf("%f", &c->area);

    printf("PIB: ");
    scanf("%f", &c->pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &c->pontosTuristicos);

    // cálculo automático
    c->densidade = c->populacao / c->area;
}

// ---------- FUNÇÃO PRINCIPAL ----------
int main() {

    Carta c1, c2;
    int opcao;

    printf("=== Cadastro Carta 1 ===\n");
    cadastrarCarta(&c1);

    printf("\n=== Cadastro Carta 2 ===\n");
    cadastrarCarta(&c2);

    // ---------- MENU ----------
    printf("\n======= MENU DE COMPARACAO =======\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha um atributo: ");
    scanf("%d", &opcao);

    printf("\n========== RESULTADO ==========\n");

    // ---------- SWITCH DO MENU ----------
    switch(opcao) {

        // ---------- POPULAÇÃO ----------
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", c1.pais, c1.populacao);
            printf("%s: %d\n", c2.pais, c2.populacao);

            if(c1.populacao > c2.populacao)
                printf("\nVencedor: %s\n", c1.pais);
            else if(c2.populacao > c1.populacao)
                printf("\nVencedor: %s\n", c2.pais);
            else
                printf("\nEmpate!\n");
        break;

        // ---------- ÁREA ----------
        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", c1.pais, c1.area);
            printf("%s: %.2f\n", c2.pais, c2.area);

            if(c1.area > c2.area)
                printf("\nVencedor: %s\n", c1.pais);
            else if(c2.area > c1.area)
                printf("\nVencedor: %s\n", c2.pais);
            else
                printf("\nEmpate!\n");
        break;

        // ---------- PIB ----------
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", c1.pais, c1.pib);
            printf("%s: %.2f\n", c2.pais, c2.pib);

            if(c1.pib > c2.pib)
                printf("\nVencedor: %s\n", c1.pais);
            else if(c2.pib > c1.pib)
                printf("\nVencedor: %s\n", c2.pais);
            else
                printf("\nEmpate!\n");
        break;

        // ---------- PONTOS TURÍSTICOS ----------
        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", c1.pais, c1.pontosTuristicos);
            printf("%s: %d\n", c2.pais, c2.pontosTuristicos);

            if(c1.pontosTuristicos > c2.pontosTuristicos)
                printf("\nVencedor: %s\n", c1.pais);
            else if(c2.pontosTuristicos > c1.pontosTuristicos)
                printf("\nVencedor: %s\n", c2.pais);
            else
                printf("\nEmpate!\n");
        break;

        // ---------- DENSIDADE (REGRA ESPECIAL) ----------
        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", c1.pais, c1.densidade);
            printf("%s: %.2f\n", c2.pais, c2.densidade);

            // menor vence
            if(c1.densidade < c2.densidade)
                printf("\nVencedor: %s\n", c1.pais);
            else if(c2.densidade < c1.densidade)
                printf("\nVencedor: %s\n", c2.pais);
            else
                printf("\nEmpate!\n");
        break;

        // ---------- OPÇÃO INVÁLIDA ----------
        default:
            printf("Opcao invalida! Reinicie e escolha um numero do menu.\n");
    }

    return 0;
}
