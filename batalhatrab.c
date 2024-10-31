#include <stdio.h>

int main (){

    int Navio[10][10] = {
        {3, 0, 0, 0, 0},
        {0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {3, 0, 0, 0, 3},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 3},
     };
     int linha, coluna;

        printf("DIgite a Posição do navio...\n");
        scanf("%d %d", &linha, &coluna);

        if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
          if (Navio[linha][coluna] == 3) {
        printf("Navio encontrado na posição (%d, %d)\n", linha, coluna);
        } else {
            printf("Não ha um navio nessa posição (%d, %d)\n", linha, coluna);

        }
    return 0;
}