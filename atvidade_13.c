#include<stdio.h>

int verificar(int lado1, int lado2, int lado3){

    if(lado1+lado2>lado3 && lado2+lado3>lado1 && lado1+lado3>lado2){
        if(lado1==lado2 && lado2==lado3){
         printf("Equilatero");
       }
       
       else if(lado1==lado2 || lado2==lado3 || lado3 == lado1){
        printf("Isoceles");
       }else{
        printf("Escaleno");
       }
    
    
   } else{
        printf("Nao é um trinagulo");
}
return 0;
}

int main(){
  int lado1, lado2, lado3;

    printf("Digite os valores do triangulo\n Digite o valor 1: ");
    scanf("%d", &lado1);

    printf("Digite o valor 2: ");
    scanf("%d", &lado2);

    printf("Digite o valor 3: ");
    scanf("%d", &lado3);
    verificar(lado1,lado2,lado3);
return 0;
}