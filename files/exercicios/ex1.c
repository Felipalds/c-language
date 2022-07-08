#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arquivo;
    char filename[50];
    char user;
    char linha[100];

    printf("Arquivo: ");
    scanf("%s", filename);

    if((arquivo = fopen(filename, "w")) == NULL)
    {
        printf("Erro");
        exit(1);
    }
    getchar();
    while(scanf("%c", &user) && user != '0')
    {
        fprintf(arquivo, "%c", user);
    }
    fclose(arquivo);

    arquivo = fopen(filename, "r");
    while(1){
        fgets(linha, 100, arquivo);
        if(!feof(arquivo))
            printf("%s", linha);
        else
            break;
    }
    fclose(arquivo);
    
}