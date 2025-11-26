#include<stdio.h>

int main()
{

    FILE *arquivo1;
    FILE *arquivo2;

    arquivo1=fopen("Clientes.txt","wr");
    fprintf(arquivo1,"cod_cli, nome,endereco,fone\n");
    fclose(arquivo1);

    arquivo2=fopen("recebimentos.txt","wr");
    fprintf(arquivo2,"num_doc, valor_doc, data_emissao,data_vancimento,cod_cli");
    fclose(arquivo2);


}