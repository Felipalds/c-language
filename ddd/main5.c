#include <stdio.h>
#include <stdlib.h>

int *A = NULL;

int main(){

    A = (int*)malloc(10*sizeof(int));

    for (int i = 0; i < 10; i++){
        A[i] = i + 1;
    }

    printf("\n");

    return 0;
}