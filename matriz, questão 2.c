#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {10, 25, 3, 8},
        {9, 30, 15, 2},
        {18, 5, 40, 7},
        {6, 12, 22, 14}
    };
    int maior = matriz[0][0];

    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    printf("Maior elemento = %d\n", maior);
    return 0;
}
