/*
    1. Livre-se dos conectivos "da", "das", "do", "dos", "e";
    2. Localizar o último sobrenome
    3. Copiar o último sobrenome para abreviatura
    4. Copiar as iniciais p/ a abreviatura
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[51] = {""}, abrev[51] = {""};

int main(){
    int i, n, j, p, final;
    char *a, conect[51] = {""};

    while(scanf("%[^\n]s", nome) && strcmp(nome, "$$$")){
        getchar(); // limpa o buffer do teclado

        j = n = strlen(nome);

        a = strstr(nome, " de ");
        if(a){
            conect[0] = '\0';
            strncpy(conect, a, 4);
            printf("conectivo = %s\n", conect);
            nome[a - nome] = '\0';
            strcat(nome, a + 3);
            printf("%s", nome);
        }
    }

    return 0;
}