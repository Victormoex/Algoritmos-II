#include<stdio.h>

int receber(int valor[10]){


 for(int i=0 ; i<10; i++){

        if(valor [i] >25) 
        {

            printf("\nSeu numero %d é maior que 25",valor[i]);

        }else if(valor[i]  < 85) 
        {

            printf("\nSeu numero %d é menor que 85", valor[i]);
        }
        else{
     

        }


    }


}
int main()
{

int valor[10];

    printf("Digite 10 numeros inteiro: ");

    for(int i=0; i<10; i++){
        scanf("%d", &valor[i]);




    }

    receber(valor);

return 0;

}
