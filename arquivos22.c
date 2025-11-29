#include <stdio.h>

int main() 
{
    FILE *f = fopen("PRODUTOS.txt","r");
    char d[50];
    float p;

    while(fscanf(f,"%*d;%49[^;];%f\n", d, &p) == 2)
    {
        if(p < 15)
            printf("%s\n", d);
    }

    fclose(f);
    return 0;
}
