#include <stdio.h>
int main()
{
    int hora_i, minuto_i, hora_f, minuto_f, hora_t, duracao_t;
    scanf("%d %d %d %d", &hora_i, &minuto_i, &hora_f, &minuto_f);

    hora_t=hora_f-hora_i;
    duracao_t=minuto_f-minuto_i;

    if(duracao_t<0){
        hora_t-=1;
        duracao_t+=60;
    }
    if((hora_t==0 && duracao_t==0) || hora_t<0)
        hora_t+=24;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora_t, duracao_t);
    
    return 0;
}