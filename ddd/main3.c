#include <stdio.h>

int A[3][3];

int main()
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            A[i][j] = i + j;
            printf("%d", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}