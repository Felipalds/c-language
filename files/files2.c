// files 2.c
// Exemplo de leitura de arquivos texto em C

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *texto;			// ponteiro para arquivos texto
	char filename[50];	// nome do arquivo a ser aberto
	char linha[100];		// linha de texto a ser lida do arquivo
	
	// abertura do arquivo para leitura. O arquivo deve existir para poder ser aberto, 
	// caso contrário ocorrerá um erro de E/S.
	printf("Nome do arquivo a ser aberto: ");
	scanf("%s", filename);
	if ((texto = fopen(filename, "r")) == NULL)
	{
		printf("Erro: O arquivo não pode ser aberto!");
		exit(1);
	}
	// lê o arquivo texto
	while (1)
	{
		fgets(linha, 100, texto);
      if (!feof(texto))
         printf("%s", linha);	// imprime na tela
      else
         break;
	}
	printf("\n");
	fclose(texto);	// fecha o arquivo
	return 0;
}
