#include <stdio.h>
int main(){ 
double n1, n2;
printf("Digite o primeiro numero: "); 
scanf("%lf", &n1); 
printf("Digite o segundo numero: ");
scanf("%lf", &n2);
double soma = n1 + n2; 
printf("A soma dos numeros e: %.2lf\n", soma);
return 0;
