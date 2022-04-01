#include <stdio.h>

float f1(int n){
    float soma = 0;
    if (n == 1){
        return 1;
    } else{
        soma = 1.0/n;
        n--;
        soma += f1(n);
        return soma;
    }
}

int main(){
    int n;
    float soma;
    while(scanf("%d", &n) != EOF){
        soma = f1(n);
        printf("%.2f\n", soma);
    }

    return 0;
}