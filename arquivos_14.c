#include <stdio.h>

int main()
 {
    int opc, numero;
    char nome[50];
    float nota1, nota2;
    FILE *f;

    while(1)
    {
        printf("1 criar, 2 incluir, 3 sair ");
        scanf("%d", &opc);
        getchar();

        if(opc==1)
        {
            f=fopen("alunos.txt","w");
            fclose(f);
        } else if(opc==2){
            f=fopen("alunos.txt","a");
            while(1){
                if(scanf("%d", &numero)!=1) break;
                getchar();
                fgets(nome,50,stdin);
                nome[strcspn(nome,"\n")]=0;
                scanf("%f %f",&nota1,&nota2);
                getchar();
                fprintf(f,"%d;%s;%.2f;%.2f\n",numero,nome,nota1,nota2);
                break; 
            }
            fclose(f);

            f=fopen("alunos.txt","r");
            while(fscanf(f,"%d;%49[^;];%f;%f",&numero,nome,&nota1,&nota2)==4)
            {
                printf("%d %s %.2f %.2f media=%.2f\n",numero,nome,nota1,nota2,(nota1+nota2)/2);
            }
            fclose(f);

        } else if(opc==3) break;
    }

    return 0;
}
