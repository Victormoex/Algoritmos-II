#include<stdio.h>
//Faça um programa que apresente o quadrado de todo número par que ele recebe.
//Exemplo: Entrada: 8 - Processamento: é par? Então imprima 8x8 - Saída: 64
int funcaopar(int num){
    int result;

    if(num %2==0){

        result=num*num;
        printf("Aqui o seu resultado %d\n", result);
    }else{

        printf("Seu numero nao é par\n");

    }
return 0;

}

int main(){

    int numero;

    scanf("%d",&numero);
    funcaopar(numero);
    
return 0;
}