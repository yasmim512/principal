#include <stdio.h>

int main() {
    int matriz[2][2];
    printf("Digite os valores da matriz 2x2:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz preenchida:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
