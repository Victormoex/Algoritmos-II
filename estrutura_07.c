//7) Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora,
//minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa
//estrutura e imprima a maior hora.

#include<stdio.h>

struct horario
{
    int hora[5];
    int minuto[5];
    int segundo[5];

}


int main()
{
    int maiorh=[0];
    int maiorm=[0];
    int maiors=[0];

    struct horario meuhorario;
    int vetorzao[5];

    printf("prencha o vetor de 5 elementos");
    
    for(int i=0; i<5; i++)
    {
        printf("qual a hora:")
        scanf("%d", meuhorario.hora[i]);

        printf("qual o minuto:");
        scanf("%d",meuhorario.minuto[i]);

        printf("qual o segundo:");
        scanf("%d",meuhorario.segundo[i]);

    }

    for(int i=0; i<5; i++)
    {
        if(maiorh>meuhorario.hora[i])
        {
            maiorh=meuhorario.hora[i];

        }


    }



   for(int i=0; i<5; i++)
    {
        if(maiorm>meuhorario.minuto[i])
        {
            maiorm=meuhorario.minuto[i];

        }


    }

   for(int i=0; i<5; i++)
    {
        if(maiors>meuhorario.segundo[i])
        {

            maiors=meuhorario.segundo[i];

        }

    }
 
    printf("sua maior hora eh %d seu maior minuto eh %d seu maior segundo eh %d",meuhorario.hora)



}