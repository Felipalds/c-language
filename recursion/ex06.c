// Exercício 06: função de Ackerman

#include <stdio.h>

unsigned ack(unsigned m, unsigned n){
    if(m == 0) return n + 1;
    if(m != 0){
        if(n == 0) return ack(m - 1, 1);
        else return ack(m-1, ack(m, n - 1));
    } 
    
}

int main(){

    int m, n;
    scanf("%d %d", &m, &n);
    printf("\n%u\n", ack(m, n));

    return 0;
}