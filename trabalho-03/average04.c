#include <stdio.h>

int main(){

    float n1, n2, n3, n4, n5, m, m2;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    m = (n1*2 + n2*3 + 4*n3 + n4) / 10;

    printf("Media: %.1f\n", m);

    if(m >= 7.0){
        printf("Aluno aprovado.\n");
        return 0;
    }
    if(m>=5.0 && m<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        m2 = (m + n5) / 2;
        if(m2 >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", m2);
    }
    if(m <= 4.9){
        printf("Aluno reprovado.\n");
    }
    return 0;
}