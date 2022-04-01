// Luiz Felipe F Rosa e Gustavo Portela

#include <stdio.h>

int soma(int a, int b){
    if(b == 0){
        return a;
    } 
    return 1 + soma(a, b-1);
}

int main(){
    int num1, num2;
    int total;
   
    scanf("%d%d", &num1, &num2);
   
    total = soma(num1, num2);
   
    printf("%d", total);
   
    return 0;
}