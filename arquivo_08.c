#include <stdio.h>

int main() {
    FILE *arq_rec;
    char linha[200];
    
 
    int cod_cli_busca;
    
   
    int num_doc, valor_doc;
    int data_emissao, data_vencimento;
    int cod_cli_rec; 
    
    int encontrado = 0;



    printf("digite o codigo: ");
    scanf("%d", &cod_cli_busca);


    arq_rec = fopen("recebimentos.txt", "r");
  
    

    fgets(linha, 200, arq_rec); 
    
   
 
    while (fscanf(arq_rec, "%d,%d,%d,%d,%d\n", &num_doc, &valor_doc, &data_emissao, &data_vencimento, &cod_cli_rec) != EOF) 
    {
                
        
    
        if (cod_cli_rec == cod_cli_busca)
         {
            encontrado = 1;
            
          
            printf("%3d | %5d | %08d | %08d\n",num_doc, valor_doc, data_emissao, data_vencimento);
                  
        }
    }

    fclose(arq_rec);
   
    
    if (encontrado == 0) {
        printf("nao tem codigo");
    }

    return 0;
}