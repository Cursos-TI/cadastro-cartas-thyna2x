#include <stdio.h>

int main () {
     /* ===== CARTA 1 ===== */
     char estado1;
     char codigo1 [4];
     char cidade1 [50];
     int populacao1;
     float area1;
     float pib;
     int pontos1;

     /* ===== CARTA 2 ===== */
    char estado2;
    char codigo2 [4];
    char cidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

 /* ===== ENTRADA DE DADOS – CARTA 1 ===== */
    printf("=== Cadastro de Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f",&pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\n=== Cadastro de Carta 2 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);
   
   printf("Nome da Cidade; ");
   scanf(" %[^\n]", cidade2);

   printf("Populacao: ");
   scanf("%d", &populacao2);

   printf("Area (km²): ");
   scanf("%f", &area2);

   printf("PIB (em bilhoes): ");
   scanf("%f", &pib2);

   printf("Numero de Pontos Turisticos: ");
   scanf("%d", &pontos2);

   // Area para exibição dos dados da cidade
   printf("\nCarta 1\n");
   printf("Estado: %c\n", estado1);
   printf("Codigo da Carta: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("Populacao: %d\n", populacao1);
   printf("Area (km²): %.2f\n", area1);
   printf("PIB (em bilhoes): %.2f\n", pib);
   printf("Numero de Pontos Turisticos: %d\n", pontos1);

   printf("\nCarta 2\n");
   printf("Estado: %c\n", estado2);
   printf("Codigo da Carta: %s\n", codigo2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("Populacao: %d\n", populacao2);
   printf("Area (km²): %.2f\n", area2);
   printf("PIB (em bilhoes): %.2f\n", pib2);
   printf("Numero de Pontos Turisticos: %d\n", pontos2);
   
    return 0;































