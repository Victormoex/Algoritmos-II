#include <stdio.h>
#include <stdlib.h>

int* criaVetor(int N, int valor) 
{
    if (N <= 0)
        return NULL;

    int *vet = (int*) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
        vet[i] = valor;

    return vet;
}

int main() {
    int N, valor;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &N);

    printf("digite o valor para preencher o vetor: ");
    scanf("%d", &valor);

    int *v = criaVetor(N, valor);

    if (v == NULL) {
        printf("Tamanho inválido!\n");
        return 0;
    }

   
    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }


    free(v);
    return 0;
}
