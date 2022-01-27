#include <stdio.h>

//incompleto 1071

int main() {
 
    int x, y;
    scanf("%d %d", &x, &y);
    int soma = 0;

    while (x!=y)
    {
        if(x % 2 != 0){
            soma += x;
        }

        x += x < y ? 1 : -1;

    }

    printf("%d\n", soma);

    return 0;
}