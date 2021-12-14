#include <stdio.h>

int main(){

    int x, mv, mp = 0;

    for(int c = 1; c <= 100; c++){
        scanf("%d", &x);
        if(x > mv){
            mv = x;
            mp = c;
        }
    }

    printf("%d\n%d\n",  mv, mp);

    return 0;
}