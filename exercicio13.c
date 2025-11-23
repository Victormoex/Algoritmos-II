#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int **A = (int**) malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++)
        A[i] = (int*) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i == j) A[i][j] = 0;
            else if (i < j) A[i][j] = 1;
            else A[i][j] = -1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    return 0;
}
