#include <stdio.h>
#include <stdlib.h>

int main()
{   int n, i, j, cont;

    printf("qual é a ordem da matriz? ");
    scanf("%d%", &n);

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < 0; i++){
            printf("Elemento [%d,%d]: ", i, j");
            scanf("%d", &mat[i][j]);
        }
    }

    printf("diagonal principal:\n ")
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
