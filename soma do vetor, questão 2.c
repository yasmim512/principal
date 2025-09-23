#include <stdio.h>

int main() {
    int v[15], i, maior, menor;
    for(i = 0; i < 15; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
    }
    maior = menor = v[0];
    for(i = 1; i < 15; i++) {
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }
    printf("Maior = %d\nMenor = %d\n", maior, menor);
    return 0;
}
