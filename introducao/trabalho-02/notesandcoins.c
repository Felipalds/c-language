#include <stdio.h>

int main(){
        int value, coins;
	char p;
        scanf("%d%c%d", &value, &p, &coins);

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
	value %= 2;
        int ones = value % 2;

	int cinquenta = coins / 50;
	coins %= 50;
	int vinte = coins / 25;
	coins %= 25;
	int dez = coins / 10;
	coins %= 10;
	int cinco = coins / 5;
	coins %= 5;


        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n", hundreds);
        printf("%d nota(s) de R$ 50.00\n", fifties);
        printf("%d nota(s) de R$ 20.00\n", twenties);
        printf("%d nota(s) de R$ 10.00\n", tens);
        printf("%d nota(s) de R$ 5.00\n", fives);
        printf("%d nota(s) de R$ 2.00\n", twos);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", value);
	printf("%d moeda(s) de R$ 0.50\n", cinquenta);
	printf("%d moeda(s) de R$ 0.25\n", vinte);
	printf("%d moeda(s) de R$ 0.10\n", dez);
	printf("%d moeda(s) de R$ 0.05\n", cinco);
	printf("%d moeda(s) de R$ 0.01\n", coins);

}

