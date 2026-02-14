#include <stdio.h>

int main() {


    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int passosBaixo = 2;
    int passosEsquerda = 1;

    int i, j;


  
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


   
    printf("\nMovimento do Cavalo:\n");

   
    for(i = 1; i <= passosBaixo; i++) {
        printf("Baixo\n");
    }

   
    j = 1;
    while(j <= passosEsquerda) {
        printf("Esquerda\n");
        j++;
    }


    return 0;
}
