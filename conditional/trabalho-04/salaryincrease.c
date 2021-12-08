#include <stdio.h>

int main(){

    float salary, new_salary, increased, percent;
    scanf("%f", &salary);

    if(salary >= 0 && salary <= 400){
        percent = 0.15;
        increased = salary * percent;
        new_salary = salary + increased;
    } else if(salary > 400 && salary <= 800){
        percent = 0.12;
        increased = salary * percent;
        new_salary = salary + increased;
    } else if(salary > 800 && salary <= 1200){
        percent = 0.10;
        increased = salary * percent;
        new_salary = salary + increased;
    } else if(salary > 1200 && salary <= 2000){
        percent = 0.07;
        increased = salary * percent;
        new_salary = salary + increased;
    } else {
        percent = 0.04;
        increased = salary * percent;
        new_salary = salary + increased;
    }

    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", increased);
    printf("Em percentual: %.0f %%\n", percent * 100);

    return 0;
}