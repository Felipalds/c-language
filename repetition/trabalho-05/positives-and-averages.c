#include <stdio.h>

int main(){

    float n, sum = 0, average;
    int positives = 0;

    for(int c = 0; c < 6; c++){
        scanf("%f", &n);
        if(n > 0){
            positives ++;
            sum += n;
        }
    }

    average = sum / positives;

    printf("%d valores positivos\n", positives);
    printf("%.1f\n", average);



    return 0;
}