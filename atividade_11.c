#include<stdio.h>
 
float media(float nota){

  if(nota < 0 || nota > 10){

    printf("Entrada não reconhecida");
     return 1;

}
  if(nota>0 && nota <=4.9){
     printf("Sua nota é D");
}

  if(nota >= 5 && nota <=6.9){
     printf("Sua nota é C");
}

  if(nota >= 7 && nota <=8.9){
     printf("Sua nota é B");

  }

  if(nota >= 9 && nota <=10){
     printf("Sua nota é A");

  }

}


int main(){
 float numero;

    printf("Qual é a media?: ");
    scanf("%f", &numero);
    media(numero);
return 0;
}
