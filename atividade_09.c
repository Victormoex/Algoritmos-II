#include <stdio.h>


void valor(int *vetor, int i) 
{
 
 
    int *p = vetor;

    while(p < vetor + 5) 
    {
        *p = i;
        p++;
    }
}

int main() 
{
    int v[5];

  
    valor(v, 15);

    
    for(int i = 0; i < 5; i++) 
    {
        printf("%d ", v[i]);  
    }
   

    return 0;
}



