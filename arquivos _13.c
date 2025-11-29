#include <stdio.h>
#include <string.h>

int main() 
{
    int n, i, j, codigo, codigo_estilista, codigo_estacao, ano;
    char nome[50], descricao[50], estacao_nome[30], buscar_estacao[30];


    scanf("%d", &n);
    char estacoes[n][30];
    int estacoes_codigo[n];
    for(i = 0; i < n; i++){
        scanf("%d", &estacoes_codigo[i]);
        scanf(" %[^\n]", estacoes[i]);
    }

    
    scanf("%d", &n);
    char estilistas[n][50];
    int estilistas_codigo[n];
    for(i = 0; i < n; i++){
        scanf("%d", &estilistas_codigo[i]);
        scanf(" %[^\n]", estilistas[i]);
    }

    // cadastrar roupas
    scanf("%d", &n);
    int roupas_codigo[n], roupas_estilista[n], roupas_estacao[n], roupas_ano[n];
    char roupas_descricao[n][50];
    for(i = 0; i < n; i++){
        scanf("%d", &roupas_codigo[i]);
        scanf(" %[^\n]", roupas_descricao[i]);
        scanf("%d %d %d", &roupas_estilista[i], &roupas_estacao[i], &roupas_ano[i]);
    }

    // relatório por estação
    scanf(" %[^\n]", buscar_estacao);
    for(i = 0; i < n; i++){
        int est_idx = -1;
        for(j = 0; j < n; j++){
            if(strcmp(estacoes[j], buscar_estacao) == 0){
                est_idx = estacoes_codigo[j];
                break;
            }
        }
        if(est_idx != -1 && roupas_estacao[i] == est_idx){
            int estilista_idx = -1;
            for(j = 0; j < n; j++){
                if(estilistas_codigo[j] == roupas_estilista[i])
                {
                    estilista_idx = j;
                    break;
                }
            }
            printf("%s %d %s\n", roupas_descricao[i], roupas_ano[i], estilistas[estilista_idx]);
        }
    }

    return 0;
}
