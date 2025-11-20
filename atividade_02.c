#include <stdio.h>

struct PlanoCartesiano {
    int PontoX;
    int PontoY;
};

typedef struct PlanoCartesiano PlanoCartesiano;

int main() {
    int origem[2] = {0, 0};
    PlanoCartesiano carte;

    printf("Digite um valor para X: ");
    scanf("%d", &carte.PontoX);

    printf("Digite um valor para Y: ");
    scanf("%d", &carte.PontoY);

    origem[0] = carte.PontoX - 0;  
    origem[1] = carte.PontoY - 0;  

    printf("\nDistância até a origem (separada por eixo):\n");
    printf("Delta X = %d\n", origem[0]);
    printf("Delta Y = %d\n", origem[1]);

    return 0;
}
