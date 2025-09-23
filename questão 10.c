#include <stdio.h>
int main(){
double duras, horas, minutos, segundos;
printf("Digite a duracao em segundos: "); 
scanf("%lf", &duras); 
horas = (int)(duras / 3600);
minutos = (int)((duras - (horas * 3600)) / 60);
segundos = duras - (horas * 3600) - (minutos * 60);
printf("A duracao e: %.0lf horas, %.0lf minutos e %.0lf segundos\n", horas, minutos, 
segundos);
return 0;
