#include <stdio.h>

int main() {
    int codigo, tipo, dias;
    printf("Digite o código do livro: ");
    scanf("%d", &codigo);
    printf("Digite o tipo de usuário (1-professor, 2-aluno): ");
    scanf("%d", &tipo);

    if (tipo == 1)
        dias = 7;
    else if (tipo == 2)
        dias = 3;
    else {
        printf("Tipo inválido!\n");
        return 0;
    }

    printf("Recibo:\nCódigo do livro: %d\nDias de empréstimo: %d\n", codigo, dias);
    return 0;
}
