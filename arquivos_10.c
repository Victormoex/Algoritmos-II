#include <stdio.h>

int main() {
    FILE *f;
    char l[200]; 
  
    int max_val; 
    int doc, val, emi, ven, cli; 
    int encontrado = 0;


    
   
    printf("valor maximo: ");
    scanf("%d", &max_val);

    
    f = fopen("recebimentos.txt", "r");
   
    fgets(l, 200, f); 
    
   
    
    while (fscanf(f, "%d,%d,%d,%d,%d\n",&doc, &val, &emi, &ven, &cli) != EOF)
     {
                  &
        
        
        if (val < max_val) {
            encontrado = 1;
            
         
            printf("%3d | %5d | %08d | %7d\n", doc, val, ven, cli);
        }
    }

    fclose(f);
 
    if (encontrado == 0) {
        printf("Nenhum");
    }

    return 0;
}