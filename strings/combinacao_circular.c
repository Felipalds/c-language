#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char palavra1[50];
    char palavra2[50];
    char letra;
    int encontrei = 0;
    int k = 0;

    while(scanf("%s", palavra1) && strcmp(palavra1, "@@@")){
        k = 0;
        encontrei = 0;
        scanf("%s", palavra2);
        int l1 = strlen(palavra1);
        int l2 = strlen(palavra2);
        //printf("%s \n", palavra1);
        //printf("%s \n", palavra2);
        if(l1 != l2){
            printf("NÃO");
        } else {
            while(encontrei == 0 && k < l1 - 1){
                letra = palavra1[0];
                for(int c = 0; c < l1; c++){
                    palavra1[c] = palavra1[c + 1];
                }
                palavra1[l1 - 1] = letra;
                //printf("%s \n", palavra1);
                if(!(strcmp(palavra1, palavra2))){
                    printf("SIM\n");
                    encontrei = 1;
                    printf("%d", encontrei);
                }
                k++;
            }
            if(encontrei == 0)
                printf("NAO\n");
            

        }
        

    }

    return 0;
}