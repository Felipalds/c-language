#include <stdio.h>

int main(){

    int x;
    while(scanf("%d", &x) && (x != -1)){

        x++;
        int matriz[x][x];

        

        for(int c = 0; c < x; c++){
            for(int g = 0; g < x; g++){
                if(c == 0 && g == 0){
                    matriz[0][0] = 1;
                } else {
                    matriz[c][g] = matriz[c - 1][g] + matriz[c - 1][g - 1];
                }
            }
        }

        for(int a = 0; a < x; a++){
            for(int b = 0; b < x; b++){
                printf("%d ", matriz[a][b]);
            }
            printf("\n");
        }
    }

    return 0;
}