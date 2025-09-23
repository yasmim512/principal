#include <stdio.h>
int main() 
{
 int codigo, qtd;
 double preco;
 printf("Digite o codigo do produto: ");
 scanf("%d", &codigo);
 printf("Digite a quantidade: ");
 scanf("%d", &qtd);
 if (codigo == 1) 
{
 preco = 5.00 * qtd;
 } 
else if (codigo == 2) 
{
 preco = 3.50 * qtd;
 } 
else if (codigo == 3) 
{
 preco = 4.80 * qtd;
 } 
else if (codigo == 4) 
{
 preco = 8.90 * qtd;
 } 
else if (codigo == 5)
{
 preco = 7.32 * qtd;
 } 
else 
{
 printf("Codigo invalido!\n");
 return 0;
 }
 printf("Valor a pagar: R$ %.2lf\n", preco);
 return 0;
}
