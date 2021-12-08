#include <stdio.h>

int main(){

    int number, hours;
    float salary_per_hour, salary_total;

    scanf("%d %d %f", &number, &hours, &salary_per_hour);
    salary_total = salary_per_hour * hours;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary_total);
    return 0;
}