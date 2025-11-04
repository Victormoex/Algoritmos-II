#include<stdio.h>
#include<stdio.h>

struct aluno_calculo
{

    int ra;
    char nome[30];
    float notas[3];

};

int main()
{
    struct aluno_calculo a1;
    a1.ra=5552;
    a1.notas[0]=10.0;
    a1.notas[1]=3.8;
    a1.notas[2]=8.0;
    
 
    
    scanf("%s",&a1.nome);

    printf("O ra eh %d\n o nome eh %s\n ",a1.ra, a1.nome);

        printf("as notas sao eh \n ");

    for(int i=0;i<3;i++)
    {
        printf("%.2f\n",a1.notas[i]);

    }



