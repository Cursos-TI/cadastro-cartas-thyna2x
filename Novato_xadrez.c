#include <stdio.h>

int main() {

    
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // variável de controle geral


   
    printf("Movimento da Torre:\n");

    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }


    
    printf("\nMovimento do Bispo:\n");

    i = 1;
    while(i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }


    
    printf("\nMovimento da Rainha:\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casasRainha);


   
    return 0;
}
