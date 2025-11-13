#include <stdio.h>

int main(){

    int tabuleiro[10][10];
    int K, L;  // letras favoritas 

    for(K=0;K<10;K++){
        for(L=0;L<10;L++){
            tabuleiro[K][L]=0;
        }
    }

    tabuleiro[2][4]=3;
    tabuleiro[2][5]=3;
    tabuleiro[2][6]=3;

    tabuleiro[5][7]=3;
    tabuleiro[6][7]=3;
    tabuleiro[7][7]=3;

    for(K=0;K<10;K++){
        for(L=0;L<10;L++){
            printf("%d ",tabuleiro[K][L]);
        }
        printf("\n");
    }

    return 0;
}
