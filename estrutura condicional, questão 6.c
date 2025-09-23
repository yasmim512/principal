#include <stdio.h>
int main() 
{
 double taxa;
 printf("Qual o valor da taxa de glicose? ");
 scanf("%lf", &taxa);
 if (taxa <= 100) 
{
 printf("Classificacao: Normal\n");
 } 
else if (taxa <= 140) 
{
 printf("Classificacao: Elevada\n");
 } 
else 
{
 printf("Classificacao: Diabetes\n");
 }
 return 0;
}