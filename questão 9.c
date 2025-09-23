#include <stdio.h> int main(){
double a,b,c;
printf("Digite o valor de um dos lado do quadrado : "); 
scanf("%lf", &a); double area = a * a;
printf("A area do quadrado e: %.2lf\n", area); 
printf("Digite o valor da altura do triangulo: "); 
scanf("%lf", &b);
double area_triangulo = (a * b) / 2;
printf("A area do triangulo e: %.2lf\n", area_triangulo); 
printf("Digite o valor da altura do trapezio: "); 
scanf("%lf", &c);
double area_trapezio = ((a + b) * c) / 2; 
printf("A area do trapezio e: %.2lf\n", area_trapezio);
