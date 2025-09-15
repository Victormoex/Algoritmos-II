#include<stdio.h>


int main(){

int a=5,b=7;

    int *p1;
    int *p2;

    p2=&a;
    p1=&b;


    if(p1<p2){
             
     printf("O endereço de p2 é maior que o de p1 %p", p1);

    }else{

        printf("O endereço de p1 é maior que o de p2 %p", p2);

    }


}