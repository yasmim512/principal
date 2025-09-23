#include <stdio.h>

int main() {
    int v[10], i, soma = 0;
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    printf("Soma dos elementos = %d\n", soma);
    return 0;
}
