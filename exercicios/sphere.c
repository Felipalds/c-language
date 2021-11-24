#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main(){
	double R, V;
	scanf("%lf", &R);
	
	V = (4.0 / 3) * pi * pow(R, 3);
	printf("VOLUME = %.3lf\n", V);
}
