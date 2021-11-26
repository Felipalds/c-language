#include <stdio.h>

int main(){
	int value;
	scanf("%d", &value);
	
	int theValue = value;
	int hundreds = value / 100;
	value = value % 100;
	int fifties = value / 50;
	value = value % 50;
	int twenties = value / 20;
	value = value % 20;
	int tens = value / 10;
	value = value % 10;
	int fives = value / 5;
	value = value % 5;
	int twos = value / 2;
	int ones = value % 2;


	printf("%d\n", theValue);
	printf("%d nota(s) de R$ 100,00\n", hundreds);
	printf("%d nota(s) de R$ 50,00\n", fifties);
	printf("%d nota(s) de R$ 20,00\n", twenties);
	printf("%d nota(s) de R$ 10,00\n", tens);
	printf("%d nota(s) de R$ 5,00\n", fives);
	printf("%d nota(s) de R$ 2,00\n", twos);
	printf("%d nota(s) de R$ 1,00\n", ones);
}
