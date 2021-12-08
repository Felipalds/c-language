#include <stdio.h>

int main(){

    int nota;
    scanf("%d", &nota);
    
    if(nota == 0)
        printf("E\n");
    if(nota > 0 && nota <= 35)
        printf("D\n");
    if(nota > 35 && nota <= 60)
        printf("C\n");
    if(nota > 60 && nota <= 85)
        printf("B\n");
    if(nota > 85)
        printf("A\n");

    return 0;
}