#include <stdio.h>
#include <string.h>

int main(){

    int casos, nhomens, salto;
    long long int homens[10000];
    
    scanf("%d", &casos);
    getchar();
    for(int c = 0; c < casos; c++){
        scanf("%d %d", &nhomens, &salto);
        getchar();
        salto--;
        for(int k = 0; k < nhomens; k++){
            homens[k] = k + 1;
        }
        int i = 0;
        while(nhomens > 0){
            i = (i + salto) % nhomens;

            for(int p = 0; p < nhomens; p++){
                printf("%lld", homens[p]);
            }

            for(int l = 0; l < nhomens; l++){
                homens[i] = homens[1 + i];
            }

            nhomens--;
            //printf("%d \n", nhomens);

            printf("\n");
        }
    }

    return 0;
}