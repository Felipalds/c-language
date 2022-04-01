#include <stdio.h>


/*
* função que recebe um inteiro sem sinal n e retorna:
* - o mesmo número caso n seja menor que 3
* - 2 * f(n - 1) + 3 * f(n - 2)
*/
float f3(unsigned n){
    if(n < 3) return n;
    return 2*f3(n-1) + 3*f3(n-2);
}

int main(){

    unsigned n;
    scanf("%d", &n);
    printf("%f", f3(n));

    return 0;
}