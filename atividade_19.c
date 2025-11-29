#include <stdio.h>

int main() 
{
    FILE *f = fopen("PRODUTOS.txt","r");
    FILE *t = fopen("temp.txt","w");
    int c;
    char d[50];
    float p;

    while(fscanf(f,"%d;%49[^;];%f\n",&c,d,&p)==3)
    {
        if(p>100) p+=10;
        fprintf(t,"%d;%s;%.2f\n",c,d,p);
    }

    fclose(f);
    fclose(t);
    remove("PRODUTOS.txt");
    rename("temp.txt","PRODUTOS.txt");

    return 0;
}
