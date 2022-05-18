#include <stdio.h>

int A[10];

int main(){

    for(int i = 0; i < 10; i++){
        A[i] = i;
        printf("A[%d] = %d \n", i, A[i]);
    }

    return 0;
}