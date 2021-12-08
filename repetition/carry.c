#include <stdio.h>

int main(){

    unsigned a, b, s;

    // podemos colocar um scanf no for de expressão
    // scanf sempre retorna o numero de items lidos ou EOF
    // quando algo for EOF é quando não tem mais entrada para ser lida

    for(; scanf("%u %u", &a, &b) != EOF ;)
    {
        s = (a & ~b) | (b & ~a);
        printf("%u\n", s);
    }

    return 0;
}