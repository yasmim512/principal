#include <stdio.h>

int main() {
    int v[10], inv[10], i;
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
    }
    for(i = 0; i < 10; i++) {
        inv[i] = v[9 - i];
    }
    printf("Vetor invertido: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", inv[i]);
    }
    printf("\n");
    return 0;
}
