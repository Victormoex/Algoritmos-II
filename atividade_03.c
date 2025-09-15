#include<stdio.h>
#include<math.h>
struct planocartesiano{

float PontoX;
float PontoY;


};

typedef struct planocartesiano carte;

int main(){

    carte ponto1;
    carte ponto2;

    printf("Digite o seu ponto X: ");
    scanf("%f", &ponto1.PontoX);
    printf("Digite o seu ponto Y: ");
    scanf("%f", &ponto1.PontoY);


    printf("Digite o seu ponto X: ");
    scanf("%f", &ponto2.PontoX);
    printf("Digite o seu ponto Y: ");
    scanf("%f", &ponto2.PontoY);

    float DistanciaX = ponto1.PontoX - ponto2.PontoX;
    float DistanciaY = ponto1.PontoY - ponto2.PontoY;
    float DistaciaT  =sqrt(DistanciaX * DistanciaX)+(DistanciaY *DistanciaY);


    printf("A distancia total é %2.f",DistaciaT);
}