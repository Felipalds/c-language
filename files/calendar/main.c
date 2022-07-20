#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 30
#define TAM_END 40
#define TAM_FONE 15

typedef struct
{
    char nome [TAM_NOME];
    char endereco[TAM_END];
    char fone[TAM_FONE];
} registro ;

typedef struct
{
    char nome[TAM_NOME];
    int position;
} indexStruct;


FILE *arquivo;
FILE *indexFile;

void beforeInitialization(){
    /*if(!(indexFile = fopen("index.dat", "rb+"))){
        printf("Cannot open index file");
        printf("\nCreating new index file\n");
        arquivo = fopen("index.dat", "wb+");
        system("pause");
    }*/

    int sizer = sizeof(registro);


    fseek(arquivo, 0, SEEK_END);
    int n = ftell(arquivo) / sizer;

    registro aux;


    indexStruct *index = (indexStruct*)malloc(n * sizeof(indexStruct));

    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= i; j--){
            fseek(arquivo, (j - 1) * sizer, SEEK_SET);
            fread(&aux, sizer, 1, arquivo);
            strcpy(index[i].nome, aux.nome);
            index[i].position = i;            
        }
    }
}

void bubblesort(FILE *F)
{
    int i, j, n;
    registro aux1, aux2;
    int sizer = sizeof(registro);

    fseek(F, 0, SEEK_END);
    n = ftell(F) / sizer;
    for (i = i; i < n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            fseek(F, (j - 1) * sizer, SEEK_SET);
            fread(&aux1, sizer, 1, F);
            fread(&aux2, sizer, 1, F);
            if (strcmp(aux1.nome, aux2.nome) > 0) // aux1 > aux2
            {
                fseek(F, (j - 1) * sizer, SEEK_SET);
                fwrite(&aux2, sizeof(registro), 1, F);
                fwrite(&aux1, sizeof(registro), 1, F);
            }
        }
    }
}

int insereRegistro()
{
    registro a;
    fseek(arquivo, 0 , SEEK_END);
    system("clear");
    printf("\nInserção de registro\n");
    printf("Nome ");
    getchar();
    gets(a.nome);
    printf("Endereço:");
    gets(a.endereco);
    printf("Telefone: ");
    gets(a.fone);
    fwrite(&a, sizeof(registro), 1, arquivo);
    printf("\n\t Registro inserido! Tecle [ENTER]\n");
    getchar();

    

    return 0;

}

int listaRegistros()
{
    registro a;
    int n;

    fseek(arquivo, 0, SEEK_END);
    n = ftell(arquivo)/sizeof(registro);
    getchar();
    system("clear");

    bubblesort(arquivo);

    rewind(arquivo);
    while(1){
        fread(&a, sizeof(registro), 1, arquivo);
        if(!feof(arquivo)){
            printf("Registro: %lu/%d\n", ftell(arquivo)/sizeof(registro), n);
            printf("Nome: %s,\nEndereço: %s\nTelefone: %s\n", a.nome, a.endereco, a.fone);
            printf("\nTecle [ENTER] para o próximo registro\n");
            getchar();
        } else break;
    }
    return 0;
}

int buscaRegistro(){
    registro a;
    char chave[TAM_NOME];
    int found = 0;
    getchar();
    rewind(arquivo);
    system("clear");
    printf("\tBusca por nome\n");
    printf("Buscar por: ");
    gets(chave);
    while(1){
        fread(&a, sizeof(registro), 1, arquivo);
        if(!feof(arquivo)){
            if(!strncmp(a.nome, chave, strlen(chave))){
                printf("Nome: %s\n", a.nome);
                printf("Endereço: %s\n", a.endereco);
                printf("Telefone: %s\n", a.fone);
                printf("Tecle [ENTER]");
                getchar();
                found = 1;
            }
        } else break;
    }
    if(!found){
        printf("Nome não encontrado. \n");
        printf("Tecle [ENTER]");
        getchar();
    }
    return 0;
}

int alteraRegistro()
{
    registro a;
    char chave[TAM_NOME];
    getchar();
    rewind(arquivo);
    system("clear");
    printf("\tAlteração de dados\n");
    printf("Buscar por: ");
    gets(chave);
    while(!feof(arquivo)){
        fread(&a, sizeof(registro), 1, arquivo);
        if(!feof(arquivo)){
            if(!strcmp(a.nome, chave)){
                printf("Endereço: %s\n", a.endereco);
                printf("Telefone: %s\n", a.fone);
                printf("\tAlterar dados:\n");
                printf("Novo nome:");
                gets(a.nome);
                fflush(stdin);
                printf("Novo endereço: ");
                gets(a.endereco);
                fflush(stdin);
                printf("Novo telefone: ");
                gets(a.fone);
                fflush(stdin);
                fseek(arquivo, -sizeof(registro), 1);
                fwrite(&a, sizeof(registro), 1, arquivo);
                printf("Tecle [ENTER]");
                getchar();
                return 0;
            }
        }
    }

    printf("Nome não encontrado \n");
    printf("Tecle [ENTER]");
    getchar();
    return 2;
}

int main()
{
    int opcao = -1;
    int (*pf[6])(); // vetor de ponteiros para as funções a serem listadas pelo menu

    pf[0] = insereRegistro;
    pf[1] = listaRegistros;
    pf[2] = buscaRegistro;
    pf[3] = alteraRegistro;
    pf[4] = NULL;

    /*
        Se o arquivo existe, ele lê e escreve, sem sobrepor
        Se o arquivo não existe, ele cria um arquivo novo
    */
    if(!(arquivo = fopen("dados.dat", "rb+")))
    {
        printf("\nErro! Não foi possível abrir o arquivo de dados!\n");
        printf("\nCriando novo arquivo de dados...\n");
        arquivo = fopen("dados.dat", "wb+");
        //system("pause");
    }

    beforeInitialization(arquivo);

    /*
    while(opcao)
    {
        //system("clear");
        printf("\tAgenda\n\n");
        printf("Menu principal\n\n");
        printf("\t[0] Sair\n");
        printf("\t[1] Inserir registro\n");
        printf("\t[2] Listar registro\n");
        printf("\t[3] Buscar registro\n");
        printf("\t[4] Alterar registro\n");
        printf("\t[5] Apagar registro\n");
        scanf("%d", &opcao);
        if((opcao > 0) && (opcao <= 5))
        {
            (*pf[opcao-1])();
        }
    }

    if(fclose(arquivo))
    {
        printf("\nErro ao fechar o arquivo de dados!\n");
        return 1;
    } 
    */
    return 0;
}





