#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[50];
    char newString[50];
    char a, b;
    int l;

    while(scanf("%[^\n]s", string) != EOF){
        getchar();
        scanf("%c", &a);
        getchar();
        scanf("%c", &b);

        strcpy(newString, string);
        l = strlen(string);
        for(int c = 0; c < l; c++){
            if(newString[c] == a)
                newString[c] = b;
        }
        printf("String original: %s \n", string);
        printf("String modificada: %s \n", newString);
        getchar();
    }

    return 0;
}