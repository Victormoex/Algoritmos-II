#include <stdio.h>
#include <stdlib.h>

int **multiplica(int **A, int linA, int colA,
                 int **B, int linB, int colB)
{
    if (colA != linB)
        return NULL;

    int **C = malloc(linA * sizeof(int*));
    for (int i = 0; i < linA; i++) {
        C[i] = malloc(colB * sizeof(int));
    }

    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}


int main() {
    int linA, colA, linB, colB;

    printf("Digite linhas e colunas da matriz A: ");
    scanf("%d %d", &linA, &colA);

    printf("Digite linhas e colunas da matriz B: ");
    scanf("%d %d", &linB, &colB);

    
    int **A = malloc(linA * sizeof(int*));
    for (int i = 0; i < linA; i++)
        A[i] = malloc(colA * sizeof(int));


    int **B = malloc(linB * sizeof(int*));
    for (int i = 0; i < linB; i++)
        B[i] = malloc(colB * sizeof(int));

    printf("Digite os valores da matriz A:\n");
    for (int i = 0; i < linA; i++)
        for (int j = 0; j < colA; j++)
            scanf("%d", &A[i][j]);

    printf("Digite os valores da matriz B:\n");
    for (int i = 0; i < linB; i++)
        for (int j = 0; j < colB; j++)
            scanf("%d", &B[i][j]);

    
    int **C = multiplica(A, linA, colA, B, linB, colB);

    if (C == NULL) {
        printf("Nao e possivel multiplicar as matrizes!\n");
        return 0;
    }

    printf("\nResultado da multiplicacao (matriz C):\n");
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}