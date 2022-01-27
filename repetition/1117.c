#include <stdio.h>

int main(){

    float n1, n2;
    while(scanf("%f", &n1) && n1 < 0 || n1 > 10)
        printf("nota invalida\n");
    
    while(scanf("%f", &n2) && n2 < 0 || n2 > 10)
        printf("nota invalida\n");
    
    printf("media = %.2f\n", (n1 + n2) / 2);

    return 0;
}