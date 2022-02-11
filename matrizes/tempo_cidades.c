#include <stdio.h>

int main(){

    int matriz[7][7] = {
        0, 2, 11, 6, 15, 11, 1,
        2, 0, 7, 12, 4, 2, 15,
        11, 7, 0, 11, 8, 3, 13,
        6, 12, 11, 0, 10, 2, 1,
        15, 4, 8, 10, 0, 5, 13,
        11, 2, 3, 2, 5, 0, 14,
        1, 15, 13, 1, 13, 14, 0
    };

    int i, j;
    while(scanf("%d %d", &i, &j) && (i != j)){
        printf("O tempo de viagem entre a cidade %d e a cidade %d é %d horas \n", i, j, matriz[i - 1][j - 1]);
    }


    return 0;
}