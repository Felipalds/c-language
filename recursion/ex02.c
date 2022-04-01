// Luiz Felipe F Rosa e Gustavo Portela

#include <stdio.h>

unsigned mult(unsigned a, unsigned b){
    unsigned soma = 0;
    
    if(b == 0) return 0;
    else return a + mult(a, b - 1);
}

int main(){
    unsigned a = 0, b = 0;
    unsigned res = 0;
    
    scanf("%u %u", &a, &b);
    
    res = mult(a, b);
    
    printf("Res = %u\n", res);

    return 0;
}