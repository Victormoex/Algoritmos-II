#include <stdio.h>
#include <stdlib.h>

int* somaColunas(int **A, int N) {
    int *B = (int*) malloc(N * sizeof(int));

    for (int j = 0; j < N; j++) {
        B[j] = 0;
        for (int i = 0; i < N; i++)
            B[j] += A[i][j];
    }

    return B;
}

int main() {
    int N;
    printf("digite um valor da matriz: ");
    scanf("%d", &N);

    int **A = (int**) malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        A[i] = (int*) malloc(N * sizeof(int));
        for (int j = 0; j < N; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    int *B = somaColunas(A, N);

    
    for (int j = 0; j < N; j++)
        printf("%d ", B[j]);


    for (int i = 0; i < N; i++)
        free(A[i]);
    free(A);
    free(B);

    return 0;
}
