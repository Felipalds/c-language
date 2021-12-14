#include <stdio.h>

int main(){

    int k, n, m, x, y;

    while(1){
        scanf("%d", &k);

        if(k == 0)
            break;

        scanf("%d %d", &n, &m);

        while(k != 0){
            scanf("%d %d", &x, &y);
            if(x == n || y == m)
                printf("divisa\n");
            else if(y > m){
                if(x > n)
                    printf("NE\n");
                else
                    printf("NO\n");
            }else{
                    if(x>n)
                        printf("SE\n");
                    else
                        printf("SO\n");
            }
        k--;
        }

    }
}