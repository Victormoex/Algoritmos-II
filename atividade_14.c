#include<stdio.h>

float MediaValores()
{

    float valor;
    float soma=0;
    int count=0;

        printf("Digite um numero positivo para continuar e negativo para parar: ");

    while(1)
    {
        printf("valor: ");
        scanf("%f", &valor);
    
        if(valor <=0)
        {
            break;
        }

    soma += valor;
    count ++;
    }
    return soma/count;

}

int main()
{

float media=MediaValores();

    if(media==0)
    {
        printf("nao tem valor");

    }else
    {
        printf("Sua media eh %f", media);

    }


}
