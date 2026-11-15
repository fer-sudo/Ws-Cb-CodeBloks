#include <stdio.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("base do retangulo: ");
    scanf("%lf", &base);

    printf("altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2*base + 2*altura;
    diagonal = sqrt(pow(base, 2.0)+ pow(altura, 2.0)); // sqrt é raiz quadrada , pow é potenciação dps vem a variavel elevado a 2.0

    printf("area= %.4lf\n", area);
    printf("perimetro= %.4lf\n", perimetro);
    printf("diagonal= %.4lf\n", diagonal);

    return 0;
}
