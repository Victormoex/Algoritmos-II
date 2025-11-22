#include <stdio.h>
#include <stdlib.h>

float* multiplica(float A[][50], float B[], int N)
{
    float *C = malloc(N * sizeof(float));
    if (C == NULL)
    {
        printf("Erro ao alocar vetor C\n");
        return NULL;
    }

    for (int i = 0; i < N; i++)
    {
        C[i] = 0;
        for (int j = 0; j < N; j++)
        {
            C[i] += A[i][j] * B[j];
        }
    }

    return C;
}

int main()
{
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    float A[50][50], B[50];

    printf("Digite a matriz A (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%f", &A[i][j]);

    printf("Digite o vetor B (%d valores):\n", N);
    for (int i = 0; i < N; i++)
        scanf("%f", &B[i]);


    float *C = multiplica(A, B, N);

    if (C != NULL)
    {
        printf("\nVetor C (resultado):\n");
        for (int i = 0; i < N; i++)
            printf("C[%d] = %.2f\n", i, C[i]);

        free(C);
    }

    return 0;
}
