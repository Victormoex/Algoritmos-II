#include<stdio.h>

int main(){

 int vetor[8];
 int mult2=0;
 int mult3=0;
 int ambmult=0;

    for(int i=0; i<8; i++){
        scanf("%d", &vetor[i]);

    }
    for(int i=0; i<8; i++){
    if(vetor[i] %2==0){
        mult2 += 1;
    }
    if(vetor[i] %3==0){

        mult3+=1;
    }
    if(vetor[i] %2==0 && vetor [i] %3==0){

        ambmult+=1;
    }

}   

    printf("\nSeu numero multiplo de 2 é %d", mult2);
    printf("\nSeu nuemro multiplo de 3 e %d", mult3);
    printf("\nSeu numero ambos é %d", ambmult);

}