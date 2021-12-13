#include <stdio.h>

int main(){

    int j = 7;
    for(int i = 1; i <= 9; i+= 2){
        for(int c = 0; c < 3; c++){
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        j += 5;
    }

    return 0;
}