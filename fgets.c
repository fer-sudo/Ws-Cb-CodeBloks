#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while((c = getchar()) != '\n'  && c != EOF) {}
}

int main ()
{

    int idade = 20;
    char nome [50];

    printf("digite o valor da idade: ");
    scanf("%d", &idade);
    printf("digite o nome da pessoa: ");
    limpar_entrada ();
    fgets(nome, 50, stdin);

    printf("idade = %d\n", idade);
    printf("nome = %s\n", nome);


    return 0;
}
