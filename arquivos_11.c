#include <stdio.h>

int main() {
    FILE *f;
    char l[200]; 
 
    int min, max; 
    int d, v, e, vn, c; 
    
    int encontrado = 0;

  
    
  
    printf("valor minimo ");
    scanf("%d", &min);
    printf("valor maximo");
    scanf("%d", &max);

    
    f = fopen("recebimentos.txt", "r");
   
    
    fgets(l, 200, f); 
    
   
    while (fscanf(f, "%d,%d,%d,%d,%d\n", &d, &v, &e, &vn, &c) != EOF) 
    {
        
               
      
        if (v >= min && v <= max) {
            encontrado = 1;
            
            printf("%3d | %5d | %08d | %7d\n", d, v, vn, c);
        }
    }

    fclose(f);
  
    
    if (encontrado == 0) {
        printf("Nenhum recebimento encontrado.\n");
    }

    return 0;
}