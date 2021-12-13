#include <stdio.h>

int main(){

    int n, x, y, k;
    int odds;
    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &x, &y);
        odds = 0;
        if(x > y){
            k = x;
            x = y;
            y = k;
        }
        for(int c = x + 1; c < y; c ++){
            if(c % 2 == 1)
                odds += c;
                
        }
        printf("%d\n", odds);
    }

    return 0;
}