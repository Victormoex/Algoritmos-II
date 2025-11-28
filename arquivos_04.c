#include<stdio.h>

#include <stdio.h>

int main() {
    int x, cod, fone, nd, val, emi, ven, codc;
    char nome[60], end[60];

    FILE *c = fopen("Clientes.txt","r");
    FILE *c2 = fopen("Clientes_tmp.txt","w");

    scanf("%d", &x);

    while (fscanf(c,"%d,%[^,],%[^,],%d\n",&cod,nome,end,&fone)!=EOF)
        if (cod != x) fprintf(c2,"%d,%s,%s,%d\n",cod,nome,end,fone);

    fclose(c); fclose(c2);
    remove("Clientes.txt");
    rename("Clientes_tmp.txt","Clientes.txt");

    FILE *r = fopen("recebimentos.txt","r");
    FILE *r2 = fopen("recebimentos_tmp.txt","w");

    while (fscanf(r,"%d,%d,%d,%d,%d\n",&nd,&val,&emi,&ven,&codc)!=EOF)
        if (codc != x) fprintf(r2,"%d,%d,%d,%d,%d\n",nd,val,emi,ven,codc);

    fclose(r); fclose(r2);
    remove("recebimentos.txt");
    rename("recebimentos_tmp.txt","recebimentos.txt");

    return 0;
}
