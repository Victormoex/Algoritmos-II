#include<stdio.h>
//Peça para a pessoa entrar com a data de nascimento dela e verifique se é uma data
//válida. (Um mês só pode ter até 31 dias, um ano tem 12 meses, e assim por diante)

int aniversario(int dia, int mes){

    if(dia>31 || dia<0){

        printf("Data invalida!");
        return 1;
    }
    if(mes>13 || mes<0){

        printf("Data invalida!");
        return 1;
    }

    printf("Seu dia de nascimento é %d, e o seu mes é %d", dia, mes);
    return 0;

}

int main(){

    int d, m;

    scanf("%d", &d);
    scanf("%d", &m);
    aniversario(d,m);
    
    return 0;
    }