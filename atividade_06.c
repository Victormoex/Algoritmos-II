#include<stdio.h>

int main(){
 int num[10];
 int numeros_25_85=0;
    printf("Digite 10 numeros inteiro: ");

     for(int i=0; i<10; i++){

        scanf("%d",&num[i]);

        

     }

     for(int i=0; i<10; i++){
        if(num[i] > 25 && num[i] < 85){
            
            printf("Numero %d (%d) esta entre 25 e 85\n", i+1, num[i]);
        } 
        else {
          
            printf("Numero %d (%d) nao esta entre 25 e 85\n", i+1, num[i]);
        }
    }
            

        

        }


     

