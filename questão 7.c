#include <stdio.h>
int main(){ 
char fun[50];
double salah, horastr; 
printf("Digite o nome do funcionario: ");
scanf("%s", fun); 
printf("Digite o salario que ele recebe por hora: "); 
scanf("%lf", &salah);
printf("Digite o numero de horas trabalhadas no mes: "); 
scanf("%lf", &horastr);
double salario = salah * horastr;
printf("O funcionario %s recebe %.2lf por mes.\n", fun, salario);
return 0;
}