#include <stdio.h>

int main() {
    int v[10], i, num, encontrado = 0;
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("Digite o numero a buscar: ");
    scanf("%d", &num);
    for(i = 0; i < 10; i++) {
        if(v[i] == num) {
            encontrado = 1;
            break;
        }
    }
    if(encontrado) printf("Numero encontrado!\n");
    else printf("Numero nao encontrado.\n");
    return 0;
}
