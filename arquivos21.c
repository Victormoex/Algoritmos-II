#include <stdio.h>

int main()
 {
    FILE *f = fopen("PRODUTOS.txt","r");
    FILE *t = fopen("temp.txt","w");
    int c, x;
    char d[50];
    float p;

    scanf("%d", &x);

    while(fscanf(f,"%d;%49[^;];%f\n",&c,d,&p)==3)
    {
        if(c != x)
            fprintf(t,"%d;%s;%.2f\n",c,d,p);
    }

    fclose(f);
    fclose(t);
    remove("PRODUTOS.txt");
    rename("temp.txt","PRODUTOS.txt");

    return 0;
}
