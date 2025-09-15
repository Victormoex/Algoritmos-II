#include<stdio.h>

int main(){

int a,b;

    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);
 
 
 int *p1,*p2;
 p1=&a ;  
 p2=&b;

    if(p1<p2){

      printf("O valor de p2 é maior que p1 %p",p1);

    }else{

      printf("O valor de p1 é maior que p2 %p",p2);
    }

}