#include <stdio.h>

int main(){

    int n, p = 0;
    
    for(int c = 0; c < 5; c++){
        scanf("%d", &n);
        if(n%2==0)
            p++;
    }

    printf("%d valores pares\n", p);

    return 0;
}