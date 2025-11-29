#include <stdio.h>
#include <stdlib.h>

int* vetorzao(int N) 
{
    int *v = (int*) malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
        v[i] = i;
    return v;
}

int main()
 {
 
    int N, *vet, i;

    printf("Digite N: ");
    scanf("%d", &N);

    vet = vetorzao(N);

    for (i = 0; i < N; i++)
        printf("%d ", vet[i]);

    

    free(vet);

    return 0;
}
