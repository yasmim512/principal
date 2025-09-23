#include <stdio.h> 
int main(){
double distn,conbus,consume;
printf("Digite a distancia percorrida em km: ");
scanf("%lf", &distn); 
printf("Digite o consumo de combustivel em litros: "); 
scanf("%lf", &conbus);
consume = distn / conbus;
printf("O consumo medio de combustivel e: %.2lf km/l\n", consume); 
return 0;
}