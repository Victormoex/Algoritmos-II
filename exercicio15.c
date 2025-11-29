#include <stdio.h>
#include <stdlib.h>

int* multiplicaVetores(int A[], int B[], int N) 
{
    int *C = (int*) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
        C[i] = A[i] * B[i];

    return C;
}

int main() {
    int N;

    printf("digite o tamanho do vetorzao ");
    scanf("%d", &N);

    int A[N], B[N];

    printf("qual o valor de a");
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    printf("qual o valor de b");
    for (int i = 0; i < N; i++)
        scanf("%d", &B[i]);

    int *C = multiplicaVetores(A, B, N);

  
    for (int i = 0; i < N; i++)
        printf("%d ", C[i]);

    

    free(C);
    return 0;
}
