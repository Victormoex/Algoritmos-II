#include <stdio.h>
#include <stdlib.h>

int* vetorzao(int N) 

{
    if (N <= 0) 
    
    {
        return NULL;
    }

    int *vet = (int*) malloc(N * sizeof(int));
    return vet;
}

int main() 
{
    int N;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &N);

    int *v = vetorzao(N);

    if (v == NULL) 
    {
        printf("vetor menor que  N <= 0\n");
        return 0;
    }

   

    free(v);
    return 0;
}
