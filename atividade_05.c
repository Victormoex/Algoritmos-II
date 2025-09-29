#include<stdio.h>

int main(){
 int a,b,c,d,e;
 int numeros[5];
 int temp;
    
 
 
    printf("Digite 5 Numeros inteiros: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
        numeros[0]=a;
        numeros[1]=b;
        numeros[2]=c;
        numeros[3]=d;
        numeros[4]=e;

     for(int i =0; i< 5-1 ; i++){
      for(int j=0; j<5-1-i; j++){
        if(numeros[j]> numeros[j+1]){
             
                temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;


        }
    }
}

    for(int i=0; i<5; i++){
        printf(" %d ", numeros[i]);

    }

}