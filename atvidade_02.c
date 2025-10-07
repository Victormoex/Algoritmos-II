#include <stdio.h>

int imprimir(char nome[30]){
 
printf("%s",nome);
}

int main(){
 char nome[30];

    printf("Digite qualquer coisa para ser imprimido: ");
    scanf("%s", &nome);
    imprimir(nome);

return 0;
}
