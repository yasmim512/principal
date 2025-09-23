#include <stdio.h>

int main() {
    int v1[5], v2[5], v3[10], i, j = 0;
    printf("Digite os 5 elementos do primeiro vetor:\n");
    for(i = 0; i < 5; i++) scanf("%d", &v1[i]);
    printf("Digite os 5 elementos do segundo vetor:\n");
    for(i = 0; i < 5; i++) scanf("%d", &v2[i]);
    for(i = 0; i < 5; i++) {
        v3[j++] = v1[i];
        v3[j++] = v2[i];
    }
    printf("Vetor intercalado: ");
    for(i = 0; i < 10; i++) printf("%d ", v3[i]);
    printf("\n");
    return 0;
}
