#include <stdio.h>

int main(){

    float a, b, c, area, perimetro;
    scanf("%f %f %f", &a, &b, &c);

    // is possible?
    if(((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a)){
        area = ((a + b) * c) / 2;
        printf("Area = %.1f\n", area);
    } else {
        perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    }
    

    return 0;
}