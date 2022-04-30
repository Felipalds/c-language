# Strings
- Matriz unidimensional de chars cujo último caractere é um '\0'
- Em C não existe o tipo string, mas podemos montá-lo da seguinte forma
``` char vet[x]```

Funções de strings:
#include <string.h>
1) strcpy(s1, s2); // copia s2 em s1
2) strcat(s1, s2); // concatena s2 ao final de s1
3) strlen(s1); // retorna o tamanho de s1
4) strcmp(s1, s2); // retorna 0 se s1 e s2 são iguais, menor que 0 se s1 < s2 e maior que 0 se s1 > s2
5) strchr(s1, ch); // retorna um ponteiro para a primeira ocorrencia de ch em s1
6) strstr(s1, s2); // retorna um ponteiro para a primeira ocorrencia de s2 em s1