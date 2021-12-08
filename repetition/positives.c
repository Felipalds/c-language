#include <stdio.h>

int main(){

    int cont = 0;
    float n;

    for(int c = 0; c < 6; c++){
        scanf("%f", &n);
        if(n > 0)
            cont++;
    }
    printf("%d valores positivos\n", cont);

    return 0;
}