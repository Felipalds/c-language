#include <stdio.h>

int main(){

    int k, u = 0;
    int a, b, c, d, e;
    char q;

    while(scanf("%d", &k) && k > 0){
        while(k--){
            u = 0;
            q = ' ';
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
            if(a <= 127){
                q = 'A';
                u ++;
            }
            if(b <= 127){
                q = 'B';
                u ++;
            }
            if(c <= 127){
                q = 'C';
                u ++;
            }
            if(d <= 127){
                q = 'D';
                u ++;
            }
            if(e <= 127){
                q = 'E';
                u ++;
            }

            if(u != 1)
                printf("*\n");
            else{
                printf("%c\n", q);
            }
                
        }
    }


    return 0;
}