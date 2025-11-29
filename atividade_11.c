#include <stdio.h>

int main() {
    int M[5][5];
    int i, j;
    int somaLinha4 = 0, somaCol2 = 0, somaDiag = 0, somaTotal = 0;


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            somaTotal += M[i][j];

            if (i == 3) somaLinha4 += M[i][j]; 
            if (j == 1) somaCol2   += M[i][j]; 
            if (i == j) somaDiag   += M[i][j]; 
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }

    }


    printf("Soma linha 4: %d\n", somaLinha4);
    printf("Soma coluna 2: %d\n", somaCol2);
    printf("Soma diagonal: %d\n", somaDiag);
    printf("Soma total: %d\n", somaTotal);

    return 0;
}
