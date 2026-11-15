#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, menor;

    printf("primeiro valor: ");
    scanf("%d", &a);
    printf("segundo valor: ");
    scanf("%d", &b);
    printf("terceiro valor: ");
    scanf("%d", &c);

    if (a < b && a < c){
    menor = a;}

    else if (b < c ) {
        menor = b ;} // Aqui é usado else e if junto pq tem 3 condiçoes , "se" , "senao se", "senao"

    else {
        menor = c; }

    printf("menor = %d\n", menor);

    return 0;
}
