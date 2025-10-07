#include<stdio.h>

int calcula(int x, int z)
{
    int x2 =1;

    for(int i=0; i<z; i++){

        x2 *= x;

    }

    printf("O seu valor ao quadrado eh x2 %d", x2);
}

int main()
{
    int x1,x2;

    printf("Digite os valores do seu x e z : ");
    scanf("%d %d",&x1 ,&x2);

    calcula(x1,x2);
}