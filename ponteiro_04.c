#include <stdio.h>

int main() {
    float matriz[3][3];
    float *p;

    p = &matriz[0][0];  

    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    
    for(int i=0; i<9; i++)
    {
        printf("Endereco de matriz[%d] = %p\n", i, p);
        p++;
    }

    return 0;
}

