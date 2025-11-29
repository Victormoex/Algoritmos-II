#include <stdio.h>

typedef struct {
    char nome[50];
    char esp[50];
    int idade;
    float alt;
} Atleta;

int main() {
    Atleta v[5], aux;
    int i, j;

    for (i = 0; i < 5; i++)
     {
        printf("nome, esporte, idade e altura do atleta : " );
        scanf("%s %s %d %f", v[i].nome, v[i].esp, &v[i].idade, &v[i].alt);
    }

    for (i = 0; i < 4; i++)
        for (j = i + 1; j < 5; j++)
            if (v[j].idade > v[i].idade) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

    printf("atletas do mais velho para o mais novo:\n");
    for (i = 0; i < 5; i++)
        printf("%s - %d anos\n", v[i].nome, v[i].idade);

    return 0;
}
