#include <stdio.h>

int main(){

    int array[10]; // separa automaticamente 10 espaços na memória
    int *p; // indicação de ponteiro para a matriz é somente usando pelo nome da matriz

    p = array;

    for(int c = 0; c < 10; c++){
        array[c] = c;
    }
    // podemos ler e escrever além dos limites da matriz, é nossa função prover limites
    for(int c = 0; c < 10; c++){
        printf("%d -> ", array[c]);
    }

    printf("\n Hello world => \n %ls", p);

    return 0;
}