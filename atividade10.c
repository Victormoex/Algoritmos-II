#include<stdio.h>

int main(void){
 int A[8];
 int maior=0;
 
 
 for(int i=0; i<8; i++){

    scanf("%d", &A[i]);

 
}

maior=A[0];
  
 for(int i=1; i<8;i++){
 
    if(A[i]> maior){
 
        maior=A[i];
 
    }

  }

 printf("O seu maior numero é %d", maior);
}