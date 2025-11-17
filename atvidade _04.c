#include <stdio.h>
#include <math.h>

void baskara(int a, int b, int c) {

    int delta = (b * b) - 4 * a * c;

    if (delta < 0) {
        printf("Sua função não tem raízes reais.\n");
        return;
    }

    float x1 = (-b + sqrt(delta)) / (2.0 * a);
    float x2 = (-b - sqrt(delta)) / (2.0 * a);

    printf("Delta = %d\n", delta);
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
}

int main() {
    int a, b, c;

    printf("Qual é o valor de A: ");
    scanf("%d", &a);

    printf("Qual é o valor de B: ");
    scanf("%d", &b);

    printf("Qual é o valor de C: ");
    scanf("%d", &c);

    baskara(a, b, c);

    return 0;
}
