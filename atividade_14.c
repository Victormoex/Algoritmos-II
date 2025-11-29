#include <stdio.h>
#include <stdlib.h>

int* somaVetores(int A[], int B[], int N)
 {
    int *C = (int*) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
        C[i] = A[i] + B[i];

    return C;
}

int main() 
{
    int N;

    printf("digite o tamanho dos vetores");
    scanf("%d", &N);

    int A[N], B[N];

    printf("digite os valores do vetor A:\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    printf("digite os valores do vetor B:\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &B[i]);

    int *C = somaVetores(A, B, N);

  
    for (int i = 0; i < N; i++)
        printf("%d ", C[i]);

    

    free(C);
    return 0;
}
