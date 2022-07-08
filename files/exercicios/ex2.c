#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void maiuscula(char texto[100])
{
    int i = 0;
    while(texto[i] != '\0'){
        texto[i] = toupper(texto[i]);
        i++;
    }
}

int main()
{
    FILE* file;
    char filename[50];
    char aux[100], aux2[100];
    printf("Arquivo: ");
    gets(filename);
    file = fopen(filename, "w");

    for(int c = 0; c < 5; c++){
        gets(aux);
        maiuscula(aux);
        fprintf(file, "%s", aux);
        fprintf(file, "\n");
    }
    fclose(file);

    file = fopen(filename, "r");
    getchar();
    for(int c = 0; c < 5; c++)
    {
        fgets(aux2, 100, file);
        if(!feof(file))
            printf("%s", aux2);
        else
            break;
    }
}