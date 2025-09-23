#include <stdio.h>
int main()
{
 double nota1, nota2, media;
 printf("Digite a primeira nota: ");
 scanf("%lf", &nota1);
 printf("Digite a segunda nota: ");
 scanf("%lf", &nota2);
 media = (nota1 + nota2) / 2.0;
 if (media < 60.0) {
 printf("Media final = %.2lf\n", media);
 printf("REPROVADO\n");
 } 
else 
{
 printf("Media final = %.2lf\n", media);
 printf("APROVADO\n");
 }
 return 0;
}
