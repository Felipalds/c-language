#include <stdio.h>

int main(){

    int x, y, k, sum = 0;
    scanf("%d %d", &x, &y);

    if(x > y){
        k = x;
        x = y;
        y = k;
    }


    for(int c = x + 1; c < y; c ++){
        if(c % 2 != 0)
            sum = sum + c;
    }
        
    printf("%d\n", sum);
    return 0;
}