#include <stdio.h>

int main(){

    float salary, taxes;

    scanf("%f", &salary);

    if(salary > 0 && salary <= 2000){
        printf("Isento\n");
        return 0;
    }
    else if(salary > 2000 && salary <= 3000){
        salary -= 2000;
        taxes = 0.08 * salary;
    }
    else if(salary > 3000 && salary <= 4500){
        salary -= 2000;
        taxes = 0.08 * 1000;
        salary -= 1000;
        taxes = taxes + (0.18 * salary);
    }
    else if(salary > 4500){
        salary -= 2000;
        taxes = 0.08 * 1000;
        salary -= 1000;
        taxes = taxes + (0.18 * 1500);
        salary -= 1500;
        taxes = taxes + (0.28 * salary);

    }
    printf("R$ %.2f\n", taxes);
    return 0;
}