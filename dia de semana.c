#include <stdio.h>
int main ()
{
int dia;
printf("Digite o dia da semana, 1-Domingo, 2-Segunda-feira, 3- Terça-feira, 4-Quarta-feira, 5-Quinta-feira, 6-Sexta-feira, 7-Sábado: ");
scanf("%d", &dia);
switch (dia)
{
case 1: printf("Domingo");
break;
case 2: printf("Segunda-feira");
break;
case 3: printf("Terça-feira");
break;
case 4: printf("Quarta-feira");
break;
case 5: printf("Quinta-feira");
break;
case 6: printf("Sexta-feira");
break;
case 7: printf("Sabado");
break;
default: printf("Dia inválido");
}
return 0;
}