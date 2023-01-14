#include <stdio.h>

int main(){
    int wantedPression, currentPression, pressionDifference;

    scanf("%d %d", &wantedPression, &currentPression);
    pressionDifference = wantedPression - currentPression;
    printf("%d\n", pressionDifference);
    return 0;
}