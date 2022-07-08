#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char caractere;
    char filename[50];
    char caracteres[26];
    int numeros[10];

    for(int c = 0; c < 26; c++){
            caracteres[c] = 0;
        }
    for(int c = 0; c < 10; c++){
            numeros[c] = 0;
        }
   

    scanf("%s", filename);

    if((file = fopen(filename, "r")) == NULL){
        printf("Erro! Arquivo inexistente!");
        exit(1);
    }
    while(1)
    {
        caractere = (fgetc(file));
        if((feof(file)))
            break;
        else{
            if(isdigit(caractere)){
                numeros[caractere - 48]++;
            }
            if(isalpha(caractere)){
                caracteres[toupper(caractere) - 65]++;
            }
        }
    }
    fclose(file);

    file = fopen("./relatorio.txt", "w+");
    fprintf(file, "CARACTERE   |   NÚMERO DE OCORRENCIAS \n");
    fprintf(file, "------------------------------------- \n");
    for(int c = 0; c < 10; c++){
        fprintf(file, "%-12d|  %5d \n", c, numeros[c]);
    }
    for(int c = 0; c < 26; c++){
        fprintf(file, "%-12c|  %5d \n", c+65, caracteres[c] );
    }
    fclose(file);

}