#include <stdio.h>

int main(){
    int inicio, fim, duracao;

    scanf("%d %d", &inicio, &fim);
    if(fim < inicio)
        duracao = 24 - inicio + fim;
    if(fim == inicio)
        duracao = 24;
    if(fim > inicio)
        duracao = fim - inicio;

    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}