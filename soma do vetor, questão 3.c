#include <stdio.h>

int main() {
    float v[8], soma = 0;
    int i;
    for(i = 0; i < 8; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%f", &v[i]);
        soma += v[i];
    }
    printf("Media = %.2f\n", soma/8);
    return 0;
}
