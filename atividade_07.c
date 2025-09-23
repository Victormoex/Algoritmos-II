#include<stdio.h>

int main(){
 int tam;
 int soma_maiores=0;
 int soma_menores=0;
 int quantidade_menores=0;
 float media_menores=0;



    printf("Quantas pessoas voce deseja digitar?: ");
    scanf("%d", &tam);
 
 int pessoas[tam];

    for(int i=0 ; i<tam ; i++){

        printf("Qual e a idade da pessoa numero %d \n", i+1);
        scanf("%d", &pessoas[i]);

    

    if(pessoas[i] > 18){
        soma_maiores += pessoas[i];

    }else{
        soma_menores += pessoas[i];
        quantidade_menores++;
    }
 }   
 printf("A soma das pessoas maiores de idade e %d", soma_maiores);

    if(quantidade_menores > 0){

        media_menores=soma_menores/quantidade_menores;

        printf("A media de menores e %f", media_menores);
    }
 return 0;
}