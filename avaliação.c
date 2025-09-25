#include <stdio.h>

int main() {
    int nota;
    printf("Digite a nota de 1 a 5: ");
    scanf("%d", &nota);

    switch (nota) {
        case 1: printf("Conceito: Péssimo\n"); break;
        case 2: printf("Conceito: Ruim\n"); break;
        case 3: printf("Conceito: Bom\n"); break;
        case 4: printf("Conceito: Muito bom\n"); break;
        case 5: printf("Conceito: Excelente\n"); break;
        default: printf("Nota inválida!\n");
    }
    return 0;
}
