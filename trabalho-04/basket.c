#include <stdio.h>

int main(){

    int x;

    scanf("%d", &x);

    if(x <= 800)
        printf("1\n");
    if(x > 800 && x <= 1400)
        printf("2\n");
    if(x > 1400 && x <= 2000)
        printf("3\n");

    return 0;
}