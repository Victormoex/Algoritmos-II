#include<stdio.h>
#include<stdlib.h>
#include<string.h>






typedef struct Cadastro
{

    char nome[50];
    int idade;
    char endereco[50];




}cadastro;

cadastro *retorna(int N)
{
    cadastro *p=malloc(N* sizeof(cadastro));

    if(p==NULL){
        printf("Erro ao alocar dinamicamente");
    }


     for(int i=0; i<N;i++)
       {
        printf("digite o nome da pessoa:  ");
        fgets(p[i].nome,50,stdin);

        printf("digite a idade da pessoa ");
        scanf("%d", &p[i].idade);
        getchar();

        printf("digite o endereco da pessoa");
        fgets(p[i].endereco,50,stdin);

       }

       return p;
}


int main()
{
    
    int N;

    printf("quantas pessoas voce deseja adcionar: ");
    scanf("%d", &N);
    getchar();
   
    cadastro *p=retorna(N);

    for (int i = 0; i < N; i++)     
    {
        printf("nome: %s", p[i].nome);
        printf("idade: %d\n", p[i].idade);
        printf("endereco: %s\n", p[i].endereco);
      
}

}
