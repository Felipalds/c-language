#include <stdio.h>

int main(){

    int a, b, c;
    int x, y, z;
    int unluck = 0;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);

    if(x > a)
        unluck += (x - a);
    if(y > b)
        unluck += (y - b);
    if(z > c)
        unluck += (z - c);
    printf("%d\n", unluck);

    return 0;
}