#include<stdio.h>



int dobro(int *g)
{
    for(int i=0; i<5; i++){
    *g = *g *2;
        g++;
}
    return *g;
}








int main()
{

    int vetorzao[5];

    int *p;
    
    p=&vetorzao[0];
        

    while(p < &vetorzao[5])
    {
    
        scanf("%d",p);
        getchar();
    
        p++;
    
    }


    dobro(p);

    printf("Os valores dobrados sao eh: %d",&p);

    


}