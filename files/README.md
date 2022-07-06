# Files
> memory
- até agora, nossos processamentos foram em memória principal
- porém essa memória é volátil - dados se perdem

## files in C
> C não possui E/S próprios 
- acontecem através de bibliotecas padrão
- podemos salvar em arquivos binários ou arquivos texto **(human legible)**
- binary - são tratados como bytes, não há tradução para ASCII por exemplo
- como ler o arquivo (extensão de imagem vs vídeo vs áudio por exemplo) será o programa. Na prática, é só um *linguição de bytes*

## Streams vs Files
- Stream (fluxo) é uma variável de memória que serve como buffer para ler o arquivo - chamado **arquivo lógico** - minimizar acesso em disco, pois é ordem de grandeza mais lento que em memória.
- File é um conjunto de dados armazenados em um dispositivo físico qualquer - chamado **arquivo físico**
- Não é seu programa que lê ou grava o arquivo em si, mas sim pede ao SO para ler (acessos e permissões)

- ### Streams de texto
  - sequência de caracteres
  - ANSI (permite mas não obriga) que o arquivo tenha '\n' para quebra de linha
- ### Streams binárias
  - sequência de bytes, correspondência de 1 para 1
  - nenhuma tradução é realizada
  - **economiza espaço**
  - dados não legíveis para humanos
  - tudo que não é texto, é binário (o programa em si que decide o que será feito com os bytes)

## Functions
### fopen
    FILE *fopen(const char *filename, const char *mode);
- o filename é o nome exato do arquivo, podendo ter path
- mode é o modo (escrita, leitura, etc.)
- FILE é o tipo do arquivo
- se der certo, retorna um endeço válido para o ponteiro que recebe o arquivo, se não recebe NULL
- trabalha com BUFFER, que é o vínculo
- const serve para para não modificar, já que é via referência
> Modos:
- r read - arquivo deve existir, não será criado e não pode gravar
- w write - criando um arquivo novo ou sobrescreve o arquivo existente
- a append - arquivo deve existir e não será criado novo e não pode ler
- rb, wb, ab, para binário
- r+ read write (arquivo deve existir)
- w+ read write (arquivo será criado se não existir)
- a+ anexa se existe, se não, cria
- b binary
- '+' combined

### fclose
    int fclose (FILE *stream);
- fecha o arquivo apontado por stream
- buffer é descarregado
- sucesso retorna 0 se não EOF

### fprintf
    int fprintf(FILE *stream, const char *format, ...);

- escreve strings nos mesmos padrões de printf()

### fscanf
    int fscanf(FILE *stream, const char *format, ...);

### feof
    int feof(FILE *stream);
- verifica se o arquivo apontado por stream terminou

### fgetc
    int fgetc(FILE *stream);
- lê um caractere específico e avança

### fputc
    int fputc(int char, FILE *stream);

### fgets
    int *fgets(char *str, int n, FILE *stream);
- n é o número máximo de caracteres que podem ser lidos pelo C
- n-1 são lidos, afinal o último é *\0*

### fputs
    int fputs(const char *str, FILE *stream)
- escreve a string
- não inclui *\0*

### fread
    size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
- lê blocos de bytes
- ptr aponta onde o valor será gravado
- size é o tamanho do bloco
- nmemb é o número de membros a serem lidos

### fseek
    int fseek(FILE *stream, long int offset, int whence);
- seta a posição do ponteiro do arquivo stream para o byte apontado por offset
- whence pode ser seek_set (inicio do arquivo), seek_cur posiciona a partir da posição corrente ou seek_end posiciona a partir do fim do arquivo