#include <stdio.h>
#include <stdlib.h>

int **A;

int main(){
    A = (int**)malloc(sizeof(int*)*5);
    if(!A)
    {
        printf("ERRO MEM INS");
        exit(1);
    }
    for(int i = 0; i < 5; i++){
        A[i] = (int*)malloc(sizeof(int)*5);
        if(!A[i])
        {
            printf("ERRO MEM INS");
            exit(2);
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            A[i][j] = i + 2*j;
        }
    }
    return 0;
}