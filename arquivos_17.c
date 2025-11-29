#include <stdio.h>

int main() 
{
    FILE *f = fopen("PRODUTOS.txt","r");
    int codigo;
    char descricao[50];
    float preco;

    if(!f) return 0;

    while(fscanf(f,"%d;%49[^;];%f\n",&codigo,descricao,&preco)==3){
        if(preco>500)
           

    fclose(f);
    return 0;
}
