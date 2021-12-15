#include <stdio.h>

int main(){

    int h1, m1, h2, m2, mMin, mHours, mt;
    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) && (h1 + h2 + m1 + m2 != 0)){
        // converter tudo pra minutos
        m1 += h1 * 60;
        m2 += h2 * 60;

        // calcular o descanso
        if(m1 < m2)
            mt = m2 - m1;
        else
            mt = m2 - m1 + 1440;

        printf("%d\n", mt);
    }
}