#include <stdio.h>


void dobro(int *g, int tamanho) 
{

    for(int i=0; i < tamanho; i++) 
    {
        g[i] = g[i] * 2;  
    }
}

int main() 
{
    int vetorzao[5];
    
    
    for(int i = 0; i < 5; i++)
        {
        printf("digite vetorzao ", );
        scanf("%d", &vetorzao[i]);
    }

    
    dobro(vetorzao, 5);

    printf("os valores dobrados sao: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vetorzao[i]);
    }
    

    return 0;
}
