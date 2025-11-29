#include <stdio.h>

typedef struct 
{
    char nome[50];
    int d, m, a;
} Pessoa;

int main()
 {
    Pessoa v[6];
    int i, velha = 0, nova = 0;

    for (i = 0; i < 6; i++) 
    {
        scanf("%s %d %d %d", v[i].nome, &v[i].d, &v[i].m, &v[i].a);
    }

    for (i = 1; i < 6; i++) 
    {

        if (v[i].a < v[velha].a ||
           (v[i].a == v[velha].a && v[i].m < v[velha].m) ||
           (v[i].a == v[velha].a && v[i].m == v[velha].m && v[i].d < v[velha].d)) {
            velha = i;
        }

        // 
        if (v[i].a > v[nova].a ||
           (v[i].a == v[nova].a && v[i].m > v[nova].m) ||
           (v[i].a == v[nova].a && v[i].m == v[nova].m && v[i].d > v[nova].d)) {
            nova = i;
        }
    }

    printf("mais velha: %s\n", v[velha].nome);
    printf("mais nova: %s", v[nova].nome);

    return 0;
}
