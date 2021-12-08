#include <stdio.h>

int main(){

	int h, kmh, l;
	scanf("%d %d", &h, &kmh);
	float distance = kmh * h;
	float spent = distance / 12.0;
	printf("%.3f\n", spent );

}
