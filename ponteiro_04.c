#include<stdio.h>

int main()
{

    float matriz[3][3];
    float *p;

    p=matriz[0][0];
    

    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
        
            scanf("%f", &matriz[i][j]);

        }
    }

    for(int i=0; i<9;i++)
    {
        printf("O endereco de linhas da matriz eh: %p\n",p );

       p++;


    }




}
