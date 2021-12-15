#include <stdio.h>

int main(){

    int m = 1, n = 1, k, s;

    while(1){
        scanf("%d %d", &m, &n);
        s = 0;

        if(m <= 0 || n <= 0)
            break;
        
        if (m > n){
            k = m;
            m = n;
            n = k;
        }
    

        for(int c = m; c <= n; c++){
            printf("%d ", c);
            s += c;
        }
        printf("Sum=%d\n", s);
    }
    return 0;
}