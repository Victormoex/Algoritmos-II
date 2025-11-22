#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *vet,tam;


    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet= malloc(tam *sizeof(int));

    if(vet!=NULL)
    {

        for(int i=0; i<tam; i++)
        {
            printf("Digite os numeros do vetor %d", i+1);
            scanf("%d", &vet[i]);


        }

        for(int i=0; i<tam; i++)
        {
            printf("%d",vet[i]);


        }

    }else
    {

        printf("Erro ao alocar dinamicamente");

    }

}