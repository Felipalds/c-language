// Revisão de Contrato

#include <stdio.h>
#include <string.h>

int main(){

    char c, s[100], newS[100];
    int zeros = 0;
    while(scanf("%c %s", &c, s) && c != 0 && (strlen(s) != 1 && s[0] != 0)){
        getchar();
        int l = strlen(s);

        int j = 0;
        for(int k = 0; k < l; k++){
            if(s[k] != c){
                newS[j] = s[k];
                j++;
            }
        }
        //printf("%d \n", j);

        
        for(int g = 0; g < j; g++){
            if(newS[g] == '0') zeros++;
        }
        //printf("%d \n", zeros);

        if(j != 0 && zeros != strlen(newS)){
            for(int g = 0; g < j; g++){
                printf("%c", newS[g]);
            }
        } else {
            printf("0");
        }

        printf("\n");
    }
}