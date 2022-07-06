// files4.c
// exemplo de escrita em arquivos binários

#include <stdio.h>
#include <stdlib.h>

// tipo de dado a ser gravado no arquivo
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
	
	// tenta abrir o arquivo para leitura/gravação no modo binário (wb+). 
	// Se o arquivo não existir, um novo será criado. Caso o arquivo exista, 
	// será apagado e um novo será criado.
	if ((dados = fopen(filename, "wb+")) == NULL)
	{
		printf("Erro: O arquivo não pode ser aberto!");
		exit(1);
	}
	getchar(); // limpa o buffer
	// lê os dados a serem gravados no arquivo
	printf("Entre com os dados a serem gravados:\n");
	printf("Nome: ");
	scanf("%[A-Za-z' ']", pessoa.nome);
	getchar();
	printf("Endereço: ");
	scanf("%[A-Za-z0-9' ',;.]", pessoa.endereco);
	getchar();
	printf("Telefone: ");
	scanf("%[0-9'('')''-']", pessoa.telefone);
	
	// grava os dados no arquivo
	fwrite(&pessoa, sizeof(CONTATO), 1, dados);
	
	// fecha o arquivo
	fclose(dados);
	return 0;
}
