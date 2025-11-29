#include <stdio.h>

typedef struct {
    int d, m, a;
} Data;

int eBissexto(int a) {
    return (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0));
}

int diasDoMes(int m, int a) {
    if (m == 2) return eBissexto(a) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

int contarDias(Data x) 
{
    int i, total = x.d;

    for (i = 1; i < x.m; i++)
        total += diasDoMes(i, x.a);

    total += x.a * 365;
    total += x.a / 4 - x.a / 100 + x.a / 400;

    return total;
}

int main() 
{
    Data d1, d2;
    int t1, t2;

    printf("digite dia mes ano da primeira data: ");
    scanf("%d %d %d", &d1.d, &d1.m, &d1.a);

    printf("digite dia mes ano da segunda data: ");
    scanf("%d %d %d", &d2.d, &d2.m, &d2.a);

    t1 = contarDias(d1);
    t2 = contarDias(d2);

    printf("dias decorridos: %d\n", t1 > t2 ? t1 - t2 : t2 - t1);

    return 0;
}
