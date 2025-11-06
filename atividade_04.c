#include<stdio.h>

typedef struct 
{
    int y;
    int x;



}point;


typedef struct
{
   point sup_esq;   
   point inf_dir;   

}retangulo;

int main()
{
  retangulo a;
    int base,area,high,diagonal,perimetro;


   printf("Digite x e y do ponto superior esquerdo: ");
    scanf("%d %d", &a.sup_esq.x, &a.sup_esq.y);

    printf("Digite x e y do ponto inferior direito: ");
    scanf("%d %d", &a.inf_dir.x, &a.inf_dir.y);

    base = a.inf_dir.x - a.sup_esq.x;
    high = a.sup_esq.y - a.inf_dir.y;

    area = base * high;
    perimetro = 2 * (base + high);
    diagonal = base * base + high * high; 

    printf("\nArea: %d", area);
    printf("\nPerimetro: %d", perimetro);
    printf("\nDiagonal^2: %d\n", diagonal);


}





