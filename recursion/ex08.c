#include <stdio.h>
#include <string.h>
#include <math.h>

float Vet[100];
float somaVet(float *V, int n){
    if(n == 0) return V[n];
    return V[n] + somaVet(V, n - 1);
}

int main(){
    int len;
    float aux, total;
    scanf("%d", &len);
    for(int i=0; i<len; i++) {
        scanf("%f", &aux);
        Vet[i] = aux;
    }
    printf("%.1f", somaVet(Vet, len));

    return 0;
}