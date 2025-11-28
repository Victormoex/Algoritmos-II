#include <stdio.h>
#include <string.h>

int main() {
    FILE *arq, *temp;
    int codigo, cod_cli;
    char nome[50], endereco[50], fone[20];

    printf("digite o codigo do cliente ");
    scanf("%d", &codigo);

    arq = fopen("clientes.txt", "r");
    temp = fopen("temp.txt", "w");

    
    while (fscanf(arq, "%d %49s %49s %19s", &cod_cli, nome, endereco, fone) != EOF) {
        if (cod_cli == codigo) {
            printf("novo nome: ");
            scanf("%s", nome);

            printf("novo endereco: ");
            scanf("%s", endereco);

            printf("novo telefone: ");
            scanf("%s", fone);
        }

        fprintf(temp, "%d %s %s %s\n", cod_cli, nome, endereco, fone);
    }

    fclose(arq);
    fclose(temp);

    remove("Clientes.txt");
    rename("temp.txt", "Clientes.txt");

 
    return 0;
}
