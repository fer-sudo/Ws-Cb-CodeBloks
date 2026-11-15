#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main ()
{

    int idade = 20;
    double salario, altura;
    char genero;
    char nome [50];

   printf("digite o valor da idade: ");
   scanf("%d", &idade);
    printf("digite o valor do salario: ");
   scanf("%lf", &salario);
    printf("digite o valor da altura: ");
   scanf("%lf", &altura);
    printf("digite o nome da pessoa: ");
   scanf("%s", nome);

    printf("idade = %d\n", idade);
    printf("salario = %.2lf\n", salario);
    printf("altura = %.2lf\n", altura);
    printf("nome = %s\n", nome);


    return 0;
}
