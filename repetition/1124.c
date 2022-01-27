// cilindros
// 17-12-21

#include <stdio.h>
#include <math.h>

int main(){

    int L, C, R1, R2, maior_lado, maior_raio, d_tot, menor_lado, diagonal;

    while(scanf("%d %d %d %d", &L, &C, &R1, &R2) && ( L + C + R1 + R2 != 0)){
        if(L > C){
            maior_lado = L;
            menor_lado = C;
        }
        else{
            maior_lado = C;
            menor_lado = L;
        }
        diagonal = sqrt(pow(C, 2) + pow(L, 2));
        if(R1 > R2)
            maior_raio = R1 * 2;
        else
            maior_raio = R2 * 2;

        int d_tot = R1 * 2 + R2 * 2;

        if(maior_raio <= menor_lado && d_tot <= maior_lado || diagonal >= d_tot)
            printf("S\n");
        else
            printf("N\n");

    }
    return 0;
}