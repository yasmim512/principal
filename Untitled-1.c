#include <studio.h>
int main() {
    double larg,comp,area,valorm2,preco;
    printf("Digite o valor do comprimento; ");
    scanf("%lf", &comp);
    printf("Digite o valor da largura; ");
    scanf("%lf", &larg);
    area = comp * larg;
    printf("Digite o valordo metro quadrado:" ); 
scanf("%lf",&valorm2); 
preco = area * valorm2;
printf("O valor do terreno e: %.2lf\n", area);
printf("O preco do terreno e:%.2lf\n", preco);
return 0;
}