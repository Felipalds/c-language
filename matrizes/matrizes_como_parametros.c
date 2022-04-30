#include <stdio.h>

int V[10];

int scanVet(int V[2], int l){
    for(int c = 0; c < l; c++)
        scanf("%d", &V[c]);
}

void printVet(int *V, int l){
    for(int c = 0; c < l; c++)
        printf("%d ", V[c]);
}


int main(){

    scanVet(V, 10);
    printVet(V, 10);

    return 0;
}