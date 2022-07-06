// files5.c
// exemplo de leitura em arquivos binários

#include <stdio.h>
#include <stdlib.h>

// tipo de dado a ser lido do arquivo
typedef struct
{
	char nome[50];
	char endereco[60];
	char telefone[15];
} CONTATO;

int main()
{
	FILE *dados;			// ponteiro para arquivo de dados
	char filename[50]; 	// nome do arquivo a ser aberto
	CONTATO pessoa;		// variável com os dados a ser gravada no arquivo
	
	printf("Nome do arquivo a ser aberto: ");
	scanf("%s", filename);
	
	// tenta abrir o arquivo para leitura/gravação no modo binário (rb+). 
	// Se o arquivo nao existe, sera criado.
	if ((dados = fopen(filename, "rb+")) == NULL)
	{
		printf("Erro: O arquivo não pode ser aberto!");
		exit(1);
	}
	getchar(); // limpa o buffer
   
   // grava dados no arquivo
   printf("Entrada de dados:\n");
   printf("Nome: ");
   gets(pessoa.nome);
   printf("Endereço: ");
   gets(pessoa.endereco);
   printf("Telefone: ");
   gets(pessoa.telefone);
   
   // posiciona no fim
   fseek(dados, 0, SEEK_END);
   
   // insere novos dados   
   fwrite(&pessoa, sizeof(CONTATO), 1, dados);
      
   // reposiciona arquivo no inicio
   fseek(dados, 0, SEEK_SET);
   
	// lê os dados gravados no arquivo
   
   while (1)
   {      
      fread(&pessoa, sizeof(CONTATO), 1, dados);
      if (!feof(dados))
      {
         printf("Dados gravados:\n");
         printf("Nome: ");
         printf("%s\n", pessoa.nome);
         printf("Endereço: ");
         printf("%s\n", pessoa.endereco);
         printf("Telefone: ");
         printf("%s\n", pessoa.telefone);
      }
      else
         break;
   }
   // fecha o arquivo
	fclose(dados);
	return 0;
}
