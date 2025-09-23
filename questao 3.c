#include <stdio.h>
int main() {
char n1[30], n2[30];
int id1, id2; 
double medi;
printf("Digite o nome da primeira pessoa: "); 
scanf("%s", n1);
printf("Digite a idade da primeira pessoa: "); 
scanf("%d", &id1);
printf("Digite o nome da segunda pessoa: "); 
scanf("%s", n2);
printf("Digite a idade da segunda pessoa: "); 
scanf("%d", &id2); 
medi = (id1 + id2) / 2;
printf("A media das idades e: %.2lf\n", medi); 
printf("A primeira pessoa e: %s com idade %d\n", n1, id1);
printf("A segunda pessoa e: %s com idade %d\n", n2, id2); 
return 0;
}