#include <stdio.h>
#include <stdlib.h>

int** criaMatriz(int N)
 {
    if (N <= 0)
        return NULL;

    int **m = (int**) malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        m[i] = (int*) malloc(N * sizeof(int));
        for (int j = 0; j < N; j++)
            m[i][j] = (i == j) ? 1 : 0;
    }

    return m;
}

int main() 
{
    int N;

    printf("digite um numero ");
    scanf("%d", &N);

    int **mat = criaMatriz(N);

    if (mat == NULL)
     {
        printf("Valor invalido!\n");
        return 0;
    }

 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", mat[i][j]);
       
    }


    for (int i = 0; i < N; i++){
        free(mat[i]);
    }
        free(mat);

    return 0;
}
