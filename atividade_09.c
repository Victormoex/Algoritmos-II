#include <stdio.h>

typedef struct 
{
    char nome[50];
    char esp[50];
    int idade;
    float alt;
} Atleta;

int main() 
{
    Atleta v[5];
    int i, velho = 0, alto = 0;

    for (i = 0; i < 5; i++)
        scanf("%s %s %d %f", v[i].nome, v[i].esp, &v[i].idade, &v[i].alt);

    for (i = 1; i < 5; i++) 
    
    {
        if (v[i].idade > v[velho].idade) velho = i;
        if (v[i].alt > v[alto].alt) alto = i;
    }

    printf("%s\n", v[alto].nome);
    printf("%s\n", v[velho].nome);

    return 0;
}
