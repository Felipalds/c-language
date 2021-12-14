#include <stdio.h>

int main(){

    int c, n, x, in = 0, out = 0;
    scanf("%d", &n);
    c = 0;
    do{
        scanf("%d", &x);
        if(x >= 10 && x <= 20)
            in ++;
        else
            out ++;

        c++;
    } while(c < n);

    printf("%d in\n%d out\n", in, out);
    return 0;
}