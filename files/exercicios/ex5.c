/**
 * Exerc5.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[]) // a função main vai receber os nomes dos arquivos original e cópia pela linha de comando
{
  FILE *in;              // stream para o arquivo de entrada (original)
  FILE *out;             // stream para o arquivo de saída (cópia)
  char infilename[256];  // nome do arquivo de entrada
  char outfilename[256]; // nome do arquivo de saída 
  char c;               // caractere a ser copiado

  // verifica se o número de parâmetros da linha de comando está correto
  if (argc != 3) // são 3 parâmetros: <programa> <arqOrigem> <arqDestino>, nesta ordem
  {
    printf("Erro: Número de parâmetros incorreto.\n");
    exit(1);
  }
  // obtém o nome do arquivo de entrada
  strcpy(infilename, argv[1]);

  // tenta abrir o arquivo de entrada para leitura
  in = fopen(infilename, "rb");
  if (!in)
  {
    printf("Erro: não foi possível abrir o arquivo %s\n", infilename);
    exit(1);
  }
  // obtém o nome do arquivo de saída
  strcpy(outfilename, argv[2]);

  // tenta abrir o arquivo de saída para escrita
  out = fopen(outfilename, "wb");
  if (!out)
  {
    printf("Erro: Não foi possível abrir o arquivo %s\n", outfilename);
    exit(2);
  }
  // faz a copia do arquivo
  while (1)
  {
    fread(&c, 1, 1, in);
    if (!feof(in))
      fwrite(&c, 1, 1, out);
    else
      break;
  }
}