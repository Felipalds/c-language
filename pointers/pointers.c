#include <stdio.h>

int main()
{

    int x = 18;
    int* endereco_de_x = &x;
    int valor_de_x = *endereco_de_x;

    printf("%d \n", x);
    printf("%p \n", endereco_de_x);
    printf("%d \n", valor_de_x);

    return 0;
}