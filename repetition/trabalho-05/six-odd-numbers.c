#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);

    for(int c = 0; c < 6; c++){
        x = x % 2 == 0? x + 1 : x;
        printf("%d\n", x++);
    }

    return 0;
}