#include<stdio.h>

int NumeroPerfeito(int valor){
 int soma=0;

    if(valor <= 1){
     return 0;

    }
     for(int i=1; i<= valor / 2 ; i++){
          
         if(valor % i == 0){

            soma+=i;
         }

     }
     if( soma == valor){
         return 1;
     }else{
        return 0;
     }
}

int main(){
 int numero;

    printf("Digite um numero para saber se ele é perfeito ou nao: ");
    scanf("%d", &numero);

    if (NumeroPerfeito(numero)){

        printf("%d è um numero perfeito ",numero);
    }else{

        printf("%d não é um numero perfeito ",numero);
    }





}
