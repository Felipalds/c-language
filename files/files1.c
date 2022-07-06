int main()
{
	FILE* texto;	// ponteiro para arquivos texto
	char filename[50];	// nome do arquivo que será aberto.
	
	// abertura do arquivo para escrita
	// Se o arquivo não existir, será criado um novo.
	// Caso o arquivo já exista, será apagado e sobrescrito.
	printf("Nome do arquivo a ser aberto: ");
	scanf("%s", filename);
	if ((texto = fopen(filename, "w")) == NULL)
	{
		printf("Erro: O arquivo não pode ser aberto!");
		exit(1);
	}
	// escreve no arquivo
	fprintf(texto, "Não interessa quem tu amas, onde é que amas, porque é que amas,\n");
	fprintf(texto, "quando é que amas ou como é que amas, o que interessa é que amas.\n");
	fprintf(texto, "John Lennon\n");
	
	// Fecha o arquivo (NÃO ESQUEÇA DESTE PASSO!)
	fclose(texto);
	return 0;
}