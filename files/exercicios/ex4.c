#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *arquivo;
    char x, y, aux;
    arquivo = fopen("arq3.txt", "rw");
    if(arquivo == NULL) exit(1);
    scanf("%c %c", &x, &y);
    while(1){
        aux = fgetc(arquivo);

        if(!(feof(arquivo)))
            if(aux == x){ // ta no proximo
                fseek(arquivo, -1, SEEK_CUR); // TA NA POSICÇAO
                fprintf(arquivo, "%c", y);
            }
        else{
            break;
        }

    }

}