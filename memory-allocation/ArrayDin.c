#include <stdio.h>
#include <stdlib.h>
#include "ArrayDin.h"

// Iniciar vetor dinamico
void initVetDin(TVetDin *V, unsigned size)
{
        V->dados = (int*)malloc(size*sizeof(int));
        if(!V->dados)
        {
                printf("Erro: Memória insuficiente!\n");
                exit(1);
        }
        else
        {
                V->n = size;
                return;
        }
}

// Deleta vetor dinâmico
void deleteVetDin(TVetDin *V)
{
        free(V->dados);
}

// Lê vetor dinâmico
void scanVetDin(TVetDin *V)
{
        for(unsigned i = 0; i < V->n; i++)
        {
                printf("V[%d] = ", i);
                scanf("%d", &V->dados[i]);
        }
        return;
}

// Escreve um vetor dinâmico
void printVetDin(TVetDin V)
{
        printf("[");
        for(unsigned i = 0; i < V.n; i++)
        {
                printf("%d", V.dados[i]);
                if(i < V.n - 1)
                        printf(",");
        }
        printf("]");
        return;
}

// Realocação de vetor dinâmico
void realocaVetDin(TVetDin *V, unsigned newSize)
{
        // precisamos passar o ponteiro como parametro, para sabermos onde esta o vetor para ser realocado
        // não é garantia de que funcionará, nem que retornará o mesmo endereço de memória.
        // se não funciona, retorna nulo
        // sempre realloc para um ponteiro auxiliar
        V->dados = (int*)realloc(V->dados, newSize*sizeof(int));
        if(!V->dados)
        {
                printf("Erro: Memória insuficiente");
                exit(1);
        }
        V->n = newSize;
        return;
}

// aloca matriz dinâmica
void InitMatrizDin(TMatDin *M, unsigned lines, unsigned cols){
	
	M->dados = (int**)malloc(lines*sizeof(int*));
	if(!M->dados){
		exit(1);
	}

	for(int c = 0; c < lines; c++){
		M->dados[c] = (int*)malloc(cols*sizeof(int));
        }
                
	M->l = lines;
                
	M->c = cols;
}

void scanMatDin(TMatDin *M){
	for(int c = 0; c < M->l; c++){
		for(int k = 0; k < M->c; k++){
			printf("[%d %d]", c, k);
			scanf("%d", &M->dados[c][k]);
		}
	}
}

void printMatDin(TMatDin M){
	for(int c = 0; c < M.l; c++){
		for(int k = 0; k < M.c; k++){
			printf("%d", M.dados[c][k]);
		}
	}
}
