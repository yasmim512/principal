#include <stdio.h> 
int main(){
double altu, larg, area, peri, diag; 
printf("Digite o valor da altura: "); 
scanf("%lf", &altu); 
printf("Digite o valor da largura: "); 
scanf("%lf", &larg);
area = altu * larg;
peri = 2 * (altu + larg); 
diag = sqrt((altu * altu) + (larg * larg));
printf("A area do retangulo e: %.2lf\n", area); 
printf("O perimetro do retangulo e: %.2lf\n", peri);
printf("A diagonal do retangulo e: %.2lf\n", diag); 
printf("Digite o valor do metro quadrado: ");
return 0;
}