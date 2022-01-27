#include <stdio.h>

int main(){

    int i = 0, g = 0, k = 1, vi = 0, vg = 0, ee = 0, grenais = 0;

    do{

        scanf("%d %d", &i, &g);
        if(i > g)
            vi ++;
        else if (g > i)
            vg ++;
        else
            ee ++;
        grenais ++;
        do{
            printf("Novo grenal (1-sim 2-nao)");
            scanf("%d", &k);
        } while(k < 1 || k > 2);

    } while(k == 1);
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vi);
    printf("Gremio:%d\n", vg);
    printf("Empates:%d\n", ee);
    vi > vg ? printf("Inter venceu mais\n") : vg > vi ? printf("Gremio venceu mais\n") : printf("Não houve vencedor\n");

    return 0;
}