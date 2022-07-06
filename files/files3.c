// files3.c
// exemplo de arquivo aberto para leitura/escrita

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *texto;			// ponteiro para arquivos texto
	char filename[50];	// nome do arquivo a ser aberto
	short num, sum = 0;	// dados a serem lidos do arquivo
	
	// abertura do arquivo para leitura/escrita no modo r+. O arquivo deve existir para poder ser aberto, 
	// caso contrário ocorrerá um erro de E/S.
	printf("Nome do arquivo a ser aberto: ");
	scanf("%s", filename);
	if ((texto = fopen(filename, "r+")) == NULL)
	{
		printf("Erro: O arquivo não pode ser aberto!");
		exit(1);
	}
	while (1)
	{
		fscanf(texto, "%hd", &num); // lê os números do arquivo
		if (feof(texto))
			break;
		sum += num;						// soma os números
	} 
	printf("Soma dos números no arquivo: %hd\n", sum);
	fprintf(texto, "%hd\n", sum);	// grava a soma no arquivo
	fclose(texto);
	return 0;
}
