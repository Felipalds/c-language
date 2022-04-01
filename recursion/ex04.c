// Luiz Felipe F Rosa e Gustavo Portela

#include <stdio.h>
#include <math.h>

float f2(int n){
    float soma = 0;
    if (n == 1){
        return (2/3);
    } else {
        soma = (pow(n, 2)+1.0)/(n+3);
        n--;
        soma += f2(n);
        return soma;
    }  
}

int main(){
    int n;
    float soma;
    while(scanf("%d", &n) != EOF){
        soma = f2(n);
        printf("%.2f\n", soma);
    }

    return 0;
}