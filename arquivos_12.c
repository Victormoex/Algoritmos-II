#include <stdio.h>

int main() 
{
    FILE *f;
    int n, i, codigo, codigo_estilista, codigo_estacao, ano;
    char nome[50], descricao[50];

    scanf("%d", &n);
    f = fopen("estilista.txt", "w");
    for(i = 0; i < n; i++){
        scanf("%d", &codigo);
        scanf(" %[^\n]", nome);
        float salario;
        scanf("%f", &salario);
        fprintf(f, "%d %s %.2f\n", codigo, nome, salario);
    }
    fclose(f);

    scanf("%d", &n);
    f = fopen("estacao.txt", "w");
    for(i = 0; i < n; i++){
        scanf("%d", &codigo);
        scanf(" %[^\n]", nome);
        fprintf(f, "%d %s\n", codigo, nome);
    }
    fclose(f);

    scanf("%d", &n);
    f = fopen("roupa.txt", "w");
    for(i = 0; i < n; i++){
        scanf("%d", &codigo);
        scanf(" %[^\n]", descricao);
        scanf("%d %d %d", &codigo_estilista, &codigo_estacao, &ano);
        fprintf(f, "%d %s %d %d %d\n", codigo, descricao, codigo_estilista, codigo_estacao, ano);
    }
    fclose(f);

    return 0;
}
