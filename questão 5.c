#include <stdio.h>
int main(){
double precou,quant,valod, troco;
printf("Digite o valor unitario do produto: "); 
scanf("%lf", &precou);
printf("Digite a quantidade comprada: ");
scanf("%lf", &quant); 
valod = precou * quant;
printf("Digite o valor pago: "); 
scanf("%lf", &troco);
troco = troco - valod;
if (troco < 0) { 
printf("Valor insuficiente para a compra.\n");
} else { 
printf("O troco e: %.2lf\n", troco); 
}
return 0; 
}