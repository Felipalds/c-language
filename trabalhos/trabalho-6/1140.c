#include <stdio.h>
#include <string.h>


int main(){
    
    char phrase[100];
    int len;

    char caractere;
    int isTaut = 1;

    //getchar();
    while(scanf("%[^\n]s", phrase) && strcmp(phrase, "*")){
        
        //printf("%s\n", phrase);
        getchar();

        //printf("%c", phrase[0]);
        len = strlen(phrase);
        caractere = phrase[0];

        for(int c = 0; c < len; c++)
        {
            if(phrase[c] == ' '){
                //printf("%c", phrase[c + 1]);
                if(caractere != phrase[c+1]){
                    isTaut = 0;
                }
            }
        }
        printf("%d", isTaut);

    }
}