#include<stdio.h>

int main(){
 int n;
 int somatotal;
    printf("Quantos numeros voce deseja digitar?: ");
    scanf("%d", &n);
     int numero[n];

        for(int i=0;i<n;i++){
            scanf("%d",&numero[i]);

        }


     for(int i=0; i<n; i++){
        somatotal+=numero[i];

     }
    printf("Sua soma e %d", somatotal);
}


