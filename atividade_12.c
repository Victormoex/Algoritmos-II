#include <stdio.h>
#include <stdlib.h>

int** criaMatrizDiagonalSecundaria(int N) 
{
    if (N <= 0)
        return NULL;

    int **m = (int**) malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        m[i] = (int*) malloc(N * sizeof(int));
        for (int j = 0; j < N; j++)
            m[i][j] = (i + j == N - 1) ? 1 : 0;
    }

    return m;
}

int main() {
    int N;

    printf("digite o tamanho do vetrozao: ");
    scanf("%d", &N);

    int **mat = criaMatrizDiagonalSecundaria(N);

   

    printf("matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", mat[i][j]);
       
    }

    for (int i = 0; i < N; i++)
        free(mat[i]);
    free(mat);

    return 0;
}
