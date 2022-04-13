#include <stdio.h>

#define MAX 50

// declara o vetor sendo global
float X[MAX];

// =======================
// função para ler um vetor (procedimento, pois não retorna nada)
// deve ser um ponteiro para ele nao tratar como uma variavel unica
// entra um vetor V e o numero de elementos desse vetor n, que deve ser menor que max
// sempre documente suas funções
// =======================
void scanVet(float *V, unsigned n){
    for(int i = 0; i < n; i++){
        printf("V[%d] = ", i);
        scanf("%f", &V[i]);
    }
}

/*
    printVet: imprime os valores do vetor de maneira formatada
        *V: ponteiro para o vetor declarado (dê preferência para vetores globais, pois não ocupam espaço da pilha)
        m: número de dados que você quer imprimir. Se tu não sabe, passe strlen(V)
*/

void printVet(float *V, int m){
    printf("\n=======================\n");
    for(int i = 0; i < m; i++){
        printf("V[%d] = %.2f\n", i, V[i]);
    }
    printf("\n=======================\n");
}

/*
    sumVet: soma os dados do seu vetor
        *V: ponteiro para seu vetor
        m: número de elementos que tu quer somar
        Return: sum = soma de todos os elementos do vetor
*/
float sumVet(float *V, int m){
    float sum = 0;
    for(int i = 0; i < m; i++){
        sum += V[i];
    }
    return sum;
}

/*
    medVet: calcula a media dos elementos do vetor
        *V: vetor que voce quer passar
        m: numero de elementos
        return: med = media dos elementos
*/
float medVet(float *V, int m){
    float sum = sumVet(V, m);
    return sum/m;
}

int main()
{
    
    int m;
    scanf("%d", &m);
    scanVet(X, m);
    printVet(X, m);
    printf("Soma dos elementos do vetor = %.2f\n", sumVet(X, m));
    printf("Media: %.2f", medVet(X, m));

    return 0;
}

