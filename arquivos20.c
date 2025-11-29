#include <stdio.h>

int main() 
{
    FILE *f = fopen("PRODUTOS.txt","r");
    char d[50];

    while(fscanf(f,"%*d;%49[^;];%*f\n", d) == 1)
    {
        if(d[0]=='M' || d[0]=='m')
            printf("%s\n", d);
    }

    fclose(f);
    return 0;
}
