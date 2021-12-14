#include <stdio.h>
#include <math.h>

int main(){

    int n, s, c = 1;
    scanf("%d", &n);

    while(c <= n){

        if(c % 2 == 0){
            s = pow(c, 2);
            printf("%d^2 = %d\n", c, s);
        }

        c++;
    }

    return 0;
}