#include <stdio.h>

// ---------- ESTRUTURA ----------
typedef struct {
    char pais [50];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    } Carta;

    // ---------- FUNÇÃO QUE RETORNA VALOR DO ATRIBUTO ----------
float pegarValor(Carta c, int atributo) {

    switch(atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontos;
        case 5: return c.densidade;
        default: return 0;
    }
}

// ---------- NOME DO ATRIBUTO ----------
char* nomeAtributo(int a) {

    switch(a){
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade";
        default: return "Desconhecido";
    }
}


// ---------- MENU DINÂMICO ----------
void mostrarMenu(int bloqueado){

    printf("\nEscolha um atributo:\n");

    if(bloqueado != 1) printf("1 - Populacao\n");
    if(bloqueado != 2) printf("2 - Area\n");
    if(bloqueado != 3) printf("3 - PIB\n");
    if(bloqueado != 4) printf("4 - Pontos Turisticos\n");
    if(bloqueado != 5) printf("5 - Densidade\n");
}


// ---------- FUNÇÃO PRINCIPAL ----------
int main(){

    // Cartas fixas
    Carta c1 = {"Brasil", 203000000, 8515767, 1868, 50};
    Carta c2 = {"Canada", 38000000, 9984670, 2140, 40};

    // cálculo densidade
    c1.densidade = c1.populacao / c1.area;
    c2.densidade = c2.populacao / c2.area;

    int a1, a2;

    // ---------- ESCOLHA ATRIBUTO 1 ----------
    mostrarMenu(0);
    printf("Primeiro atributo: ");
    scanf("%d", &a1);

    if(a1 < 1 || a1 > 5){
        printf("Opcao invalida!\n");
        return 0;
    }

    // ---------- ESCOLHA ATRIBUTO 2 ----------
    mostrarMenu(a1);
    printf("Segundo atributo: ");
    scanf("%d", &a2);

    if(a2 < 1 || a2 > 5 || a2 == a1){
        printf("Opcao invalida ou repetida!\n");
        return 0;
    }

    // ---------- VALORES ----------
    float v1a1 = pegarValor(c1,a1);
    float v2a1 = pegarValor(c2,a1);
    float v1a2 = pegarValor(c1,a2);
    float v2a2 = pegarValor(c2,a2);

    // ---------- RESULTADO INDIVIDUAL ----------
    int p1 = 0, p2 = 0;

    // regra especial densidade (5)
    if(a1 == 5){
        if(v1a1 < v2a1) p1++;
        else if(v2a1 < v1a1) p2++;
    } else {
        if(v1a1 > v2a1) p1++;
        else if(v2a1 > v1a1) p2++;
    }

    if(a2 == 5){
        if(v1a2 < v2a2) p1++;
        else if(v2a2 < v1a2) p2++;
    } else {
        if(v1a2 > v2a2) p1++;
        else if(v2a2 > v1a2) p2++;
    }

    // ---------- SOMA DOS ATRIBUTOS ----------
    float soma1 = v1a1 + v1a2;
    float soma2 = v2a1 + v2a2;

    // ---------- RESULTADO FINAL (TERNÁRIO) ----------
    char *vencedor =
        (soma1 > soma2) ? c1.pais :
        (soma2 > soma1) ? c2.pais :
        "Empate";

    // ---------- EXIBIÇÃO ----------
    printf("\n======= RESULTADO =======\n");

    printf("\nPais 1: %s", c1.pais);
    printf("\nPais 2: %s\n", c2.pais);

    printf("\nAtributos escolhidos: %s e %s\n",
           nomeAtributo(a1), nomeAtributo(a2));

    printf("\n--- Valores ---\n");

    printf("%s -> %.2f | %.2f\n", c1.pais, v1a1, v1a2);
    printf("%s -> %.2f | %.2f\n", c2.pais, v2a1, v2a2);

    printf("\nSoma %s: %.2f", c1.pais, soma1);
    printf("\nSoma %s: %.2f\n", c2.pais, soma2);

    printf("\nResultado Final: %s\n", vencedor);

    return 0;
}