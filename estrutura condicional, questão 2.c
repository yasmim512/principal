#include <stdio.h> 
int main()
{
double a, b, c, delta, x1, x2;
printf("Digite os valores de a, b e c: ");
scanf("%lf %lf %lf", &a, &b, &c);
delta = b*b - 4*a*c;
if (delta < 0)
{
 printf("A equacao nao possui raizes reais.\n");
} 
else if (delta == 0) 
{
 x1 = -b / (2*a);
 printf("A equacao possui uma raiz: %.2lf\n", x1);
} 
else 
{
 x1 = (-b + sqrt(delta)) / (2*a);
 x2 = (-b - sqrt(delta)) / (2*a);
 printf("As raizes da equacao sao: %.2lf e %.2lf\n", 
x1, x2);
}
return 0;
}
