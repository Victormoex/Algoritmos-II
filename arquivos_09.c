#include <stdio.h>

int main() {
    FILE *arq_rec;
    char linha[200]; 
    

    int valor_min_busca;
    

    int num_doc, valor_doc;
    int data_emissao, data_vencimento;
    int cod_cli_rec; 
    
    int encontrado = 0;


    

    printf("Digite o minimo: ");
    scanf("%d", &valor_min_busca);

   
    arq_rec = fopen("recebimentos.txt", "r");
  
    
    fgets(linha, 200, arq_rec); 
    
  
    
  
    while (fscanf(arq_rec, "%d,%d,%d,%d,%d\n",   &num_doc, &valor_doc, &data_emissao, &data_vencimento, &cod_cli_rec) != EOF) {
                
        
        if (valor_doc > valor_min_busca) 
        {
            encontrado = 1;
            
       
            printf("%3d | %5d | %08d | %12d\n",  num_doc, valor_doc, data_vencimento, cod_cli_rec);
                 
        }
    }

    fclose(arq_rec);
    
    
    if (encontrado == 0) {
        printf("Nenhum recebimento encontrado.\n");
    }

    return 0;
}