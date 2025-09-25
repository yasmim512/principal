#include <stdio.h>

int main() {
    float valor;
    int tipo;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("Digite o tipo de comprador (1-visitante, 2-servidor, 3-aluno): ");
    scanf("%d", &tipo);

    if (tipo == 2)
        valor *= 0.90; // 10% desconto
    else if (tipo == 3)
        valor *= 0.95; // 5% desconto

    printf("Valor a pagar: R$ %.2f\n", valor);
    return 0;
}
