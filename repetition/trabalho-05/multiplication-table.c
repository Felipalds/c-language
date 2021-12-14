#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int c = 1; c <= 10; c++){
        printf("%d x %d = %d\n", c, n, c*n);
    }

    return 0;
}