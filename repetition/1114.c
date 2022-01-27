#include <stdio.h>

int main(){
    int try;

    while(scanf("%d", &try) && try != 2002){
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
    return 0;
}