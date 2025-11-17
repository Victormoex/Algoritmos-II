#include <stdio.h>

void horas_da_empresa(float segundostotal){
    
    int horas = segundostotal / 3600;
    int minutos = ((int)segundostotal % 3600) / 60;
    int segundos = (int)segundostotal % 60;

    printf("Sua empresa trabalha %d horas, %d minutos e %d segundos.\n",
           horas, minutos, segundos);
}

int main() {

    float horatotal;

    printf("Quantos segundos a sua empresa trabalha por dia? ");
    scanf("%f", &horatotal);

    horas_da_empresa(horatotal);

    return 0;
}

