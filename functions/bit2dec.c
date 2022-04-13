
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 8

int Bits[100];

int bin2dec(char bits[100], int n){
    if(n == 1){
        return (bits[0] - 48);
        
    } else {
        return ((bits[0] - 48) * pow(2, n - 1)) + bin2dec(&bits[1], n - 1);
    }
}
int dec2bin(int n, int bits[100]){
    int k = 0;
    int resto = n % 2;
    int divi = n / 2;
    if(divi == 0){
        bits[k] = resto;
        k++;
        return resto;
    } else {
        bits[k] = resto;
        k++;
        dec2bin(divi, *Bits);
        return resto;
    }
}

int main()
{
    /*char bits[100];
    scanf("%s", bits);*/
    
    int inteiro;

    scanf("%d", &inteiro);
    
    dec2bin(inteiro, *Bits);
    
    
    //printf("%d", bin2dec(bits, strlen(bits)));
    return 0;
}

