#include <stdio.h>

int main(){

    float j = 1;
    for(float i = 0; i <= 2.2; i += 0.2){
        for(float k = 0; k < 3; k++){
            printf("I=%g J=%g\n", i, j);  
            j++;
        }
        j = j - 3;
        j+=0.2;
    }

    return 0;
}