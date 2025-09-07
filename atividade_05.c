#include<stdio.h>
#include<math.h>

 float horas_da_empresa(float segundostotal){

    float hora; 
    float minuto;
    float segundo;

     hora= floor (segundostotal/3600);
     minuto = floor (fmod (segundostotal, 3600 )/60);
     segundo= fmod (segundostotal, 60);
     
 
    
    printf("Sua empresa trabalha %2.f horas e %2.f minutos e %2.f segundos ", hora,minuto,segundo);

 }


int main(){
    
    float horatotal;

    printf("Quantos segundos a sua empresa trabalha por dia");
    scanf("%f", &horatotal);

    horas_da_empresa(horatotal);
}