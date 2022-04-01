#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[50];
    int l, i, j;

    getchar();
    while(scanf("%[^\n]s", string) != EOF){
        getchar();
        l = strlen(string);
        for(int c = 0; c < l; c++){
            while(string[c] != ' '){
                if(string[c] == ' '){
                    strcpy(string, &string[c]);
                }
            }
        }
        printf("%s", string);
        getchar();
    }

    return 0;
}