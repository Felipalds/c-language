#include <stdio.h>

int main (){

    int n, positives = 0, negatives = 0, evens = 0, odds = 0;
    for(int c = 0; c < 5; c++){
        scanf("%d", &n);
        if(n > 0){
            positives ++;
        }
        if(n < 0){
            negatives ++;
        }
        if(n%2 == 0)
            evens ++;
        else
            odds ++;
    }
    printf("%d valor(es) par(es)\n", evens);
    printf("%d valor(es) impar(es)\n", odds);
    printf("%d valor(es) positivo(s)\n", positives);
    printf("%d valor(es) negativo(s)\n", negatives);


    return 0;
}