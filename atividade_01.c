#include<stdio.h>
#include<string.h>
// implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
// armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
// estrutura lida.
struct pessoa{
    char nome[40];
    int idade;
    char endereco[40];
};

typedef struct pessoa pessoa;

int main(){
 pessoa  p1;
    
    printf("Qual é o seu nome?: ");
    fgets(p1.nome,sizeof(p1.nome), stdin);
   

    printf("Qual é a sua idade: ");
    scanf("%d", &p1.idade);
    getchar();

    printf("Qual é o seu endereco : ");
    fgets(p1.endereco, sizeof(p1.endereco), stdin);

    printf("\nseu nome é %s", p1.nome);
    printf("sua idade é %d\n", p1.idade);
    printf("seu endereço é %s\n", p1.endereco);
return 0;

}

    

