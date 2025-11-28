#include <stdio.h>
#include <string.h>

int main() {
    FILE *arq_recebimentos, *arq_temp;
    
 
    int num_doc_busca, cod_cli_busca;

  
    int num_doc, valor_doc, data_emissao, data_vencimento, cod_cli;
    
    int encontrado = 0;



    printf("qual o numero do documento: ");
    scanf("%d", &num_doc_busca);
    
    printf("qual o codigo do cliente ");
    scanf("%d", &cod_cli_busca);

    
    arq_recebimentos = fopen("recebimentos.txt", "r");
  
    arq_temp = fopen("recebimentos_temp.txt", "w");
   

  
    char linha[200];
    if (fgets(linha, 200, arq_recebimentos)) {
        fprintf(arq_temp, "%s", linha);
    }
    
   
    while (fscanf(arq_recebimentos, "%d,%d,%d,%d,%d\n",&num_doc, &valor_doc, &data_emissao, &data_vencimento, &cod_cli) != EOF)
     {
                
  
        if (num_doc == num_doc_busca && cod_cli == cod_cli_busca) 
        {
            encontrado = 1;
            printf("Documento encontrado (Doc: %d, Cliente: %d)", num_doc, cod_cli);
            
           
            printf("novo valor do documento ");
            scanf("%d", &valor_doc);
            
            printf("nova data de emissao ");
            scanf("%d", &data_emissao);
            
            printf("nova data dev encimento");
            scanf("%d", &data_vencimento);
            
  
        }
        
      
        fprintf(arq_temp, "%d,%d,%d,%d,%d\n",num_doc, valor_doc, data_emissao, data_vencimento, cod_cli);
               
    }

    fclose(arq_recebimentos);
    fclose(arq_temp);

    if (encontrado)
     {
        remove("recebimentos.txt");
        rename("recebimentos_temp.txt", "recebimentos.txt");
  

 }   return 0;
}