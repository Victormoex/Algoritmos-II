#include<stdio.h>
#include<string.h>
int main()
{

    FILE *arquivo1;
    char nome[60],endereco[60];
    int cod,fone;


    printf("qual o codigo do cliente?");
    scanf("%d",&cod);
    
    getchar();

    printf("qual o nome do cliente?\n");      
    fgets(nome,60,stdin);
    nome[strcspn(nome, "\n")] = 0;
    
    printf("qual o endereco?\n");
    fgets(endereco,60,stdin);
    endereco[strcspn(endereco, "\n")]=0;

    printf("qual e o numero ?\n");
    scanf("%d", &fone);



    arquivo1=fopen("Clientes.txt","a");
    fprintf(arquivo1,"%d,%s,%s,%d\n",cod,nome,endereco,fone);
    fclose(arquivo1);


    return 0;

}
