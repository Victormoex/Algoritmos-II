#include <stdio.h>

int main() 
{
    FILE *f;
    int codigo, c, existe;
    char descricao[50];
    float preco;

    f = fopen("PRODUTOS.txt", "a+");

    while(scanf("%d", &codigo) == 1)
    {
        getchar();
        scanf(" %[^\n]", descricao);
        scanf("%f", &preco);

        existe = 0;
        rewind(f);
        while(fscanf(f,"%d;%*[^;];%*f",&c) == 1){
            if(c == codigo){
                existe = 1;
                break;
            }
        }

        if(!existe){
            fprintf(f,"%d;%s;%.2f\n",codigo,descricao,preco);
        }
    }

    fclose(f);
    return 0;
}
