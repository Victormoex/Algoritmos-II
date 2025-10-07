#include<stdio.h>

int verificar(int valor1){

    if( valor1 %2==0){
     printf("Seu numero é par");
    }else{
     printf("Seu numero é impar");

    }
}
int main(){
 int numero;

    printf("Digite um numero para verificar se ele é par ou impar");
    scanf("%d", &numero);
    verificar(numero);

return 0;
}
