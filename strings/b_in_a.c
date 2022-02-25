#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char palavra1[50];
    char palavra2[50];
    while(scanf("%s", palavra1) && strcmp(palavra1, "###")){
        scanf("%s", palavra2);
        char *p;
        int i;
        p = strstr(palavra1, palavra2);
        if(p == NULL)
            printf("0\n");
        else{
            i = p - &palavra1[0] + 1;
            printf("%d\n", i);
        }

    }

    return 0;
}