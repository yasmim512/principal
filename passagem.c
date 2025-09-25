#include <stdio.h>

int main() {
    int destino, idaVolta;
    float valor;

    printf("Digite o código do destino (1-Morros, 2-Barreirinhas, 3-Bacabeira, 4-Rosário): ");
    scanf("%d", &destino);
    printf("Compra ida e volta? (1-Sim, 0-Não): ");
    scanf("%d", &idaVolta);

    switch (destino) {
        case 1: valor = 120; break;
        case 2: valor = 200; break;
        case 3: valor = 50; break;
        case 4: valor = 80; break;
        default: valor = 0; printf("Destino inválido!\n");
    }

    if (idaVolta == 1) valor *= 0.90;
    printf("Valor da passagem: R$ %.2f\n", valor);
    return 0;
}
