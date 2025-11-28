#include <stdio.h>
#include <string.h>

/
int dataParaDias(int data_aaaammdd) {
    int ano = data_aaaammdd / 10000;
    int mes = (data_aaaammdd / 100) % 100;
    int dia = data_aaaammdd % 100;
   
    return ano * 365 + mes * 30 + dia; 
}

int main() {
    FILE *arq_rec, *arq_cli;
    char linha[200];
    

    int data_ini_busca, data_fim_busca, data_hoje_ref;
    int num_doc, valor_doc, data_emissao, data_vencimento, cod_cli_rec;
    int cod_cli_arq, fone_arq;
    int dias_venc, dias_hoje; 
    int dias_atraso;

    char nome_cliente[50], endereco_arq[50];
    
  
    
    
    printf("digite a data de inicio ");
    scanf("%d", &data_ini_busca);
    printf("digite a data do fim: ");
    scanf("%d", &data_fim_busca);
    printf("data de hoje: ");
    scanf("%d", &data_hoje_ref);

    dias_hoje = dataParaDias(data_hoje_ref);

    
    arq_rec = fopen("recebimentos.txt", "r");
   
    
    fgets(linha, 200, arq_rec); 
    
  
    
   
    while (fscanf(arq_rec, "%d,%d,%d,%d,%d\n",  &num_doc, &valor_doc, &data_emissao, &data_vencimento, &cod_cli_rec) != EOF)
     {
                
        
    
        if (data_vencimento >= data_ini_busca && data_vencimento <= data_fim_busca) 
        {
            
      
            strcpy(nome_cliente, "Nao Encontrado");
            
            arq_cli = fopen("Clientes.txt", "r");
            if (arq_cli) {
                fgets(linha, 200, arq_cli); 
                
               
                while (fscanf(arq_cli, "%d,%49[^,],%49[^,],%d\n",  &cod_cli_arq, nome_cliente, endereco_arq, &fone_arq) != EOF) 
                {
                             
                    if (cod_cli_arq == cod_cli_rec) {
                        break; 
                    }
                }
                fclose(arq_cli);
            }
            
         
            dias_venc = dataParaDias(data_vencimento);
            dias_atraso = 0;
            
            if (dias_hoje > dias_venc)
             {
                dias_atraso = dias_hoje - dias_venc;
            }

      
            printf("| %7d | %08d | %5d | %12s | %16d |\n",num_doc, data_vencimento, valor_doc, nome_cliente, dias_atraso);
                 
        }
    }

    fclose(arq_rec);
   

    return 0;
}