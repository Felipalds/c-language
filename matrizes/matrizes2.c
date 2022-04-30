#include <stdio.h>

int M[2][2];

int scanMat(int M[2][2], int lines, int kols)
{
    for(int l = 0; l < lines; l++)
        for(int c = 0; c < kols; c++)
            scanf("%d", &M[l][c]);
}

void printMat(int M[2][2], int lines, int kols)
{
    for(int l = 0; l < lines; l++)
    {
        printf("[");
        for(int c = 0; c < kols; c++)
        {
            if(c != kols - 1)
                printf("%d , ", M[l][c]);
            else
                printf("%d", M[l][c]);
        }
        printf("]\n");
    }
}


int main()
{
    int lines = 2, kols = 2;
    scanMat(M, lines, kols);
    printMat(M, lines, kols);

    return 0;
}