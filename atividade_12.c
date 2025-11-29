#include <stdlib.h>

int** criaMatriz(int N)
{
    int **M = (int**) malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++)
        M[i] = (int*) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i + j == N - 1) M[i][j] = 1;
            else M[i][j] = 0;

    return M;
}
