#include <stdio.h>

int main(){

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int dif = (a*b - c*d);
    printf("DIFERENCA = %d\n", dif);

    return 0;
}