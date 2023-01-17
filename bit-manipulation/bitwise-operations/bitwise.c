#include <stdio.h>

int main(){

    // a = 5 (0101) b = 9 (1001)
    unsigned char a = 5, b = 9;

    // a & b = 0001
    printf("a&b = %.4d\n", a&b);

    // a | b = 1101 = 13
    printf("a|b = %.4d\n", a|b);

    // a ^ b = 1100 = 12
    printf("a^b = %.4d\n", a^b);

    // ~a = 11111010 = - 0000110 = 6
    printf("~a = %.4d\n", ~a);

    // a >> 1 = 0101 >> 0010
    printf("a>>1 = %.4d\n", a>>1);

    // a << 1 = 0101 << 1010
    printf("a<<1 = %.4d\n", a<<1);


    return 0;
}