#include <stdio.h>
#include <stdlib.h>

int *soma(int *a, int *b, int n) {
    int *c = malloc(n * sizeof(int));
    if (c == NULL) return NULL;

    for (int i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    return c;
}

int main() {
    int n = 5;
    int a[5] = {1,2,3,4,5};
    int b[5] = {10,20,30,40,50};

    int *c = soma(a, b, n);

    for (int i = 0; i < n; i++)
        printf("%d ", c[i]);

    free(c);
    return 0;
}
