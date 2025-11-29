#include <stdio.h>

int main() 
{
    FILE *f = fopen("PRODUTOS.txt", "w");
    int codigo;
    char descricao[50];
    float preco;

    while(scanf("%d", &codigo) == 1)
    {
        getchar();
        fgets(descricao, 50, stdin);
        descricao[strcspn(descricao,"\n")] = 0;
        scanf("%f", &preco);
        fprintf(f, "%d;%s;%.2f\n", codigo, descricao, preco);
    }

    fclose(f);
    return 0;
}
