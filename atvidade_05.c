#include<stdio.h>

 float horas_da_empresa(float segundostotal){

    float hora; 
    float minuto;
    float segundo;

     hora=segundostotal/60;
     minuto=hora*60;
    
    
 
    
    printf("Sua empresa trabalha %f horas e %f minutos e %f segundos ", hora,minuto,segundo);

 }


int main(){
    
    float horatotal;

    printf("Quantos segundos a sua empresa trabalha por dia");
    scanf("%f", &horatotal);

    horas_da_empresa(horatotal);
}
