#include <stdio.h>

int main() {
    int n, i, j;
    int p;

 
    printf("Digite n, i e j: ");
    scanf("%d %d %d", &n, &i, &j);

    int count = 0;
    int num = 0;

    while (count < n)
     {
        if (num % i == 0 || num % j == 0) 
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }


    printf("\n\nDigite p para verificar se eh primo: ");
    scanf("%d", &p);

    int primo = 1;

    if (p <= 1)
     {
        primo = 0;
    }

    for (int k = 2; k < p; k++) 
    {
        if (p % k == 0)
        {
            primo = 0;
            break;
        }
    }

    if (primo == 1)
        printf("%d eh primo\n", p);
    else
        printf("%d nao eh primo\n", p);

    return 0;
}
