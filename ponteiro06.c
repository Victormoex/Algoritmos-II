#include<stdio.h>

int main()
{
    int array[5];

    int *p;

    

    for(int i=0; i<5; i++)
    {

        scanf("%d", &array[i]);

    }

    for(int i=0;i<5;i++)
    {

        if(array[i] %2==0)

        {


            p=&array[i];

            printf("Os enderecos dos valores é %p ",p);

        }
    



    }



}