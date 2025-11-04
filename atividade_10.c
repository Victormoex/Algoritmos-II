
#include <stdio.h>

int main()
{

    int a, *b, **c, ***d;
 

    printf("Digite um valor para ver o dobro triplo e quadruplo desse mesmo valor: ");
    scanf("%d",&a);

    b=&a;
    c=&b;
    d=&c;

    printf("O dobro do valor eh %d\n", 2*(*b));
    printf("O triplo do valor eh %d\n", 3*(**c));
    printf("O quadraplo do valor eh %d\n", 4*(***d));
}