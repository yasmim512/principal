#include <stdio.h>
int main() 
{
 double temp, convertido;
 char escala;
 printf("Digite a escala de origem (C ou F): ");
 scanf(" %c", &escala);
 printf("Digite a temperatura: ");
 scanf("%lf", &temp);
 if (escala == 'C' || escala == 'c') 
{
 convertido = (9.0 * temp) / 5.0 + 32.0;
 printf("Temperatura em Fahrenheit: %.2lf\n", convertido);
 } 
else if (escala == 'F' || escala == 'f') 
{
 convertido = 5.0 * (temp - 32.0) / 9.0;
 printf("Temperatura em Celsius: %.2lf\n", convertido);
 }
else 
{
 printf("Escala invalida!\n");
 }
 return 0;
}