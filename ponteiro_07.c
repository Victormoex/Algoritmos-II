#include <stdio.h>

int ocorre(char *str1, char *str2)
{
    char *p1, *p2;

    if (*str2 == '\0')
        return 1;

    while (*str1 != '\0')
    {
        p1 = str1;
        p2 = str2;

        while (*p1 == *p2 && *p2 != '\0')
        {
            p1++;
            p2++;
        }

        if (*p2 == '\0')
            return 1;

        str1++;
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("digite a string principal: ");
    fgets(str1, 100, stdin);

    printf("digite a string a buscar: ");
    fgets(str2, 100, stdin);

    for (char *p = str1; *p; p++) if (*p == '\n') *p = '\0';
    for (char *p = str2; *p; p++) if (*p == '\n') *p = '\0';

    if (ocorre(str1, str2))
        printf("a segunda string ocorre dentro da primeira.\n");
    else
        printf("a segunda string nao ocorre dentro da primeira.\n");

    return 0;
}
