#include <stdio.h>
#include <stdlib.h>

int main()

{   int idade, soma, cont;
    double media;



    printf("digite as idade:\n ");
    scanf("%d", &idade);

    soma = 0;
    cont = 0;

    while (idade >= 0) {
        soma = soma + idade;
        cont = cont + 1;
        scanf("%d",&idade);
    }

    if (cont == 0) {
        printf("impossivel calcular");
    }
    else {
            media = (double) soma / cont;
            printf("media = %.2lf\n", media);
        } //aqui colocar o double na soma pq como e idade e a media pode dar numero quebrado e a soma é inteiro

    return 0;
}
