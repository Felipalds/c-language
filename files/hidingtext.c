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
  FILE *text;
  char infilename[256];  // nome do arquivo de entrada
  char outfilename[256]; // nome do arquivo de saída 
  char textfilename[256]; // nome do arquivo de texto
  int count = 0;

  char c;               // caractere a ser copiado

  // verifica se o número de parâmetros da linha de comando está correto
  if (argc != 4) // são 3 parâmetros: <programa> <arqOrigem>  <arqDestino> <arqTexto>, nesta ordem
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
  out = fopen(outfilename, "w+b");
  if (!out)
  {
    printf("Erro: Não foi possível abrir o arquivo %s\n", outfilename);
    printf("QBACASD");
    exit(2);
  }
  // faz a copia do arquivo
  while (1)
  {
    fread(&c, 1, 1, in);
    if (!feof(in)){
     fwrite(&c, 1, 1, out);
    }
    else
      break;
  }



  strcpy(textfilename, argv[3]); 
  text = fopen(textfilename, "rb");
  if(!text)
  {
      printf("Erro: Não foi possível abrir o arquivo %s \n", textfilename);
      exit(3);
  }

  while(1)
  {
      fread(&c, 1, 1, text);
      if(!feof(text))
      {
        fwrite(&c, 1, 1, out);
        count++;
      }
      else
        break;
  }

  fseek(out, -count, SEEK_END);

    while(1)
    {
        fread(&c, 1, 1, out);
        if(!feof(out))
        {
            printf("%c", c);
            count++;
        }
        else
            break;
    }



  fclose(text);
  fclose(out);
  fclose(in);

}