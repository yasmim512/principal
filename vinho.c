#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o código do vinho: ");
    scanf("%d", &codigo);

    if (codigo >= 1 && codigo <= 3)
        printf("Classificação: De mesa\n");
    else if (codigo == 4)
        printf("Classificação: Tinto\n");
    else if (codigo == 5)
        printf("Classificação: Branco seco\n");
    else if (codigo == 6 || codigo == 7)
        printf("Classificação: Branco doce\n");
    else if (codigo == 8)
        printf("Classificação: Rosé\n");
    else if (codigo == 9)
        printf("Classificação: Espumante\n");
    else if (codigo >= 10)
        printf("Classificação: Fortificado\n");
    else
        printf("Código inválido!\n");

    return 0;
}
