#include<stdio.h>

int nadador(int idade){

    if(idade<0 ||idade<=4){
     printf("Entrada não reconhecida");
     return 0;  
    }
    if(idade>=5 && idade>=7){
     printf("Infatil A");

    }
    if(idade>=8 && idade>=10){
     printf("Infatil B");
    }
    if(idade>=11 && idade>=13){
     printf("Juvenil A");
    }
    if(idade>=14 && idade>=17){
     printf("Juvenil B");
    }
    if(idade>18){
     printf("Adulto");
    }
}


int main(){
 int idade;
    
    printf("Qual é a sua idade?: ");
    scanf("%d", &idade);
    nadador(idade);

return 0;
}