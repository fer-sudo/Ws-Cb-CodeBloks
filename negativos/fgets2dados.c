#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while((c = getchar()) != '\n'  && c != EOF) {}
}

void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main ()
{

    int idade1, idade2;
    char nome1 [50], nome2 [50];

    printf("digite o valor da idade1: ");
    scanf("%d", &idade1);
    printf("digite o nome da pessoa1: ");
    limpar_entrada ();
    ler_texto(nome1, 50);

    printf("digite o valor da idade2: ");
    scanf("%d", &idade2);
    printf("digite o nome da pessoa2: ");
    limpar_entrada ();
    ler_texto(nome2, 50);


    printf("idade1 = %d\n", idade1);
    printf("nome1 = %s\n", nome1);
    printf("idade2 = %d\n", idade2);
    printf("nome2 = %s\n", nome2);


    return 0;
}
