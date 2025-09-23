#include <stdio.h>
int main() 
{
 double preco, pago, troco;
 printf("Digite o preco do produto: ");
 scanf("%lf", &preco);
 printf("Digite o valor pago: ");
 scanf("%lf", &pago);
 if (pago < preco) 
{
 printf("DINHEIRO INSUFICIENTE\n");
 } 
Else
{
 troco = pago - preco;
 printf("Troco = %.2lf\n", troco);
 }
 return 0;
}