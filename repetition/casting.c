// 1116 - Beecrowd
// 17-12-2021
// Trabalhando com Cast

#include <stdio.h>

int main(){

    int k, x, y;
    float d;
    
    scanf("%d", &k);

    while(k--){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        } else {
            // Aqui vem o cast => (float)
            d = (float)x / y;
            printf("%.1f\n", d);
        }
    }

    return 0;
}