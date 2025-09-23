#include <stdio.h>
int main(){
int area, raio; 
double pi = 3.14, resultado; 
printf("Digite o valor do raio do circulo: "); 
scanf("%d", &raio); 
area = raio * raio;
resultado = pi * area; 
printf("A area do circulo e: %.2lf\n", resultado);
return 0;
}