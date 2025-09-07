#include<stdio.h>

int verificar(int valor1){

    if(valor1<0){
     printf("Seu numero é negativo");

    }else{
     printf("Seu numero é positivo");
    }
return 0;
}
int main(){
 int numero;

    printf("Digite um numero para saber se ele é positivo ou negativo: ");
    scanf("%d", &numero);
    verificar(numero);
return 0;
}
