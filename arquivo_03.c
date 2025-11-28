#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo_clientes, *arquivo_recebimentos;
    char linha[200];
    int cod, codigo_lido;
    int encontrado = 0;

    int num_doc, valor_doc, data_emissao, data_vencimento;

    printf("qual o codigo  ");
    scanf("%d", &cod);
    getchar();

    arquivo_clientes = fopen("Clientes.txt", "r");
   
    


    fgets(linha, 200, arquivo_clientes);

    
    while (fgets(linha, 200, arquivo_clientes))
     {
        sscanf(linha, "%d", &codigo_lido);

        if (codigo_lido == cod) 
        {
            encontrado = 1;
            break;
        }
    }
    fclose(arquivo_clientes);
   

    if (encontrado) {
        printf("clinte cadastrado");
        return 0;   
    }

  
  

    printf("qual o numero do documento? ");
    scanf("%d", &num_doc);
    printf("qual o valor do documento? ");
   	scanf("%d", &valor_doc);
    printf("qual a data de emissao ");
   	scanf("%d", &data_emissao);
    printf("qual a data de vencimento");
   	scanf("%d", &data_vencimento);

    arquivo_recebimentos = fopen("recebimentos.txt", "a");
   

    fprintf(arquivo_recebimentos, "%d,%d,%d,%d,%d\n", num_doc, valor_doc, data_emissao, data_vencimento, cod);
         

    fclose(arquivo_recebimentos);

  }
