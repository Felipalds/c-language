#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    
    for(int c = 1; c < 10000; c++){
        if(c % n == 2)
            printf("%d\n", c);
    }
    return 0;
}