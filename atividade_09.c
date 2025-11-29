#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverteString(char *s) 
{
    int tam = strlen(s);

    char *inv = (char*) malloc((tam + 1) * sizeof(char));

    for (int i = 0; i < tam; i++)
     {
        inv[i] = s[tam - 1 - i];
    }

    inv[tam] = '\0';
    return inv;
}

int main() 
{
    char palavra[100];

    printf("digite uma palavra: ");
    scanf("%s", palavra);

    char *invertida = inverteString(palavra);

    printf("invertida: %s\n", invertida);

    free(invertida);
    return 0;
}
