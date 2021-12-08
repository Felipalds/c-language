#include <stdio.h>

int main(){

    float x, y;
    scanf("%f %f", &x, &y);

    if(x == 0 || y == 0){
        if(x != 0)
            printf("Eixo X\n");
        if(y != 0)
            printf("Eixo Y\n");
        if(x == 0 && y == 0)
            printf("Origem\n");
        return 0;
    }
    if(x > 0){
        if(y > 0)
            printf("Q1\n");
        else
            printf("Q4\n");
    } else {
        if(y > 0)
            printf("Q2\n");
        else
            printf("Q3\n");
    }
    return 0;
}