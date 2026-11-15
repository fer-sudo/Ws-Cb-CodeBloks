#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nmenores;
    double soma, media, percentualmenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n] [50];
    int idades [n];
    double alturas[n];

    for (int i = 0; i < n; i++) {
       printf("Dados da %da pessoa:\n", i + 1);
       printf("nome: ");
       fseek(stdin, 0, SEEK_END);
       gets(nomes[i]);
       printf("idade: ");
       scanf("%d", &idades[i]);
       printf("altura: ");
       scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for (int i = 0; i < n; i++){
        soma = soma +alturas[i];
    }
    media = soma /n;
    printf("altura media: %.2lf", media);

    nmenores = 0;
    for (int i = 0; i < n; i++){
        if (idades[i] < 16) {
            nmenores++;
        }
    }
    percentualmenores = nmenores * 100.0 / n;
    printf("Pessoas menores de 16 anos: %.1lf %%\n", percentualmenores);

    for (int i = 0; i < n; i++){
        if (idades[i] < 16){
                printf("%s\n", nomes[i]);
        }
    }
    return 0;
}
