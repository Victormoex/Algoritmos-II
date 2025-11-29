#include <stdio.h>

void preencher(int *v, int tam, int valor)
{
    int *p = v;
    while (p < v + tam)
    {
        *p = valor;
        p++;
    }
}

int main()
{
    int v[5], valor;

    printf("digite o valor para preencher o vetor: ");
    scanf("%d", &valor);

    preencher(v, 5, valor);

    printf("vetor preenchido: ");
    int *p = v;
    while (p < v + 5)
    {
        printf("%d ", *p);
        p++;
    }

    return 0;
}
