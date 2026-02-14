#include <stdio.h>

void moverTorre(int casas){
    if(casas == 0) return; // condição de parada

    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}



void moverRainha(int casas){
    if(casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int casas){

    if(casas == 0) return;

    int v, h;


    for(v = 1; v <= 1; v++){          
        for(h = 1; h <= 1; h++){      
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // 
}


void moverCavalo(){

    int vertical, horizontal;

    
    for(vertical = 1; vertical <= 2; vertical++){

        if(vertical == 0)
            continue; // 

        printf("Cima\n");

       
        for(horizontal = 1; horizontal <= 1; horizontal++){

            if(vertical < 2)
                break; // 

            printf("Direita\n");
        }
    }
}




int main(){

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
