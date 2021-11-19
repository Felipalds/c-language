#include <stdio.h>

int main(){
    double R;
    double pi = 3.14159;

    scanf("%lf", &R);

    double A = pi * R * R;
    printf("A=%.4f\n", A);
}