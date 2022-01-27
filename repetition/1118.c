#include <stdio.h>

int main(){
    float n1, n2;
    int v;

    do{
        while(scanf("%f", &n1) && n1 < 0 || n1 > 10)
            printf("nota invalida\n");
        
        while(scanf("%f", &n2) && n2 < 0 || n2 > 10)
            printf("nota invalida\n");
        
        printf("media = %.2f\n", (n1 + n2) / 2);

        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &v);
        } while(v != 1 && v != 2);
    } while(v == 1);
return 0;
        
}