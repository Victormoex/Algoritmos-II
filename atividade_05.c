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
    point p;


   printf("Digite x e y do ponto superior esquerdo: ");
    scanf("%d %d", &a.sup_esq.x, &a.sup_esq.y);

    printf("Digite x e y do ponto inferior direito: ");
    scanf("%d %d", &a.inf_dir.x, &a.inf_dir.y);

    printf("Digite x e y do ponto a verificar: ");
    scanf("%d %d", &p.x, &p.y);

    if (p.x >= a.sup_esq.x && p.x <= a.inf_dir.x &&p.y <= a.sup_esq.y && p.y >= a.inf_dir.y)
     {
        printf("O ponto (%d, %d) ESTA dentro do retangulo.\n", p.x, p.y);
    } else {
        printf("O ponto (%d, %d) NAO esta dentro do retangulo.\n", p.x, p.y);
    }

    
}