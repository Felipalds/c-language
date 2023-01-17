#include <stdio.h>

int findOdd(int numbers[], int len){

    int res = 0;

    for(int i = 0; i < len; i++){
        res ^= numbers[i];
    }

    return res;


    // 0001 ^ 0010 = 0011 (3)
    // 0011 ^ 0010 = 0001 (1)
    // 0001 ^ 0001 = 0000 (0)
    // 0000 ^ 0100 = 0100 (4)
    // 0100 ^ 0001 = 0101 (5)
    // 0101 ^ 0001 = 0100 (4)

    // 0011 ^ 0101 = 0110 (6)
}

int main(){

    int numbers[] = { 1, 3, 2, 2, 5, 3, 1, 4, 1, 3, 1, 4};

    int n = sizeof(numbers) / sizeof(numbers[0]);

    printf("%d\n", findOdd(numbers, n));

    return 0;
}