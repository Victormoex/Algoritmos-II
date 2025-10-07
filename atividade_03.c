#include <stdio.h>

int texto(char nome [10]){

    printf("%s",nome);
    printf(" OK");
    
    return 0;
}

int main(){
    char a[10];
    scanf("%s",&a);
    texto(a);

return 0;
}
