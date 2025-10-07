#include<stdio.h>

int retorno(int ano, int mes, int dia){
 int AnoAtual,DiaAtual,MesAtual,DiasDeVida;

    AnoAtual=2025;
    DiaAtual=06;
    MesAtual=07;

    DiasDeVida=(AnoAtual-ano)*365;
    DiasDeVida+=(MesAtual-mes)*30;
    DiasDeVida+=DiaAtual-dia;
    printf("Voce tem %d dias de existencia",DiasDeVida);


}


 int main(){

  int mesr,anor,diar;
    
    printf("Qual é o ano nascimento: ");
    scanf("%d", &anor);
    printf("Qual é o mes que voce nasceu: ");
    scanf("%d", &mesr);
    printf("Qual dia voce nasceu: ");
    scanf("%d", &diar);
 

    retorno(anor,mesr,diar);

return 0;
}
