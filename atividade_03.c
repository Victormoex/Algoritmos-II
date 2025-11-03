#include<stdio.h>

int fatorial(int valor1){
 int fatorial=1;
    for(int i=1; i<=valor1; i++){

         fatorial*= i;

        
    }

    printf("resultado é %d", fatorial);
}


int main(void){
 int numero;

    printf("Digite um numero para ver seu fatorial: ");
    scanf("%d", &numero);
    fatorial(numero);

}
