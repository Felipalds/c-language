typedef struct
{
        int *dados; //dados armazenados
        unsigned n; //tamanho do vetor
} TVetDin;

typedef struct
{
        int **dados; //dados armazenados
        unsigned l;  //número de linhas
        unsigned c;  //número de colunas
} TMatDin;

/*
 funções
*/

// VETOR ==========================================
// cria um vetor dinamico com o tamanho size
void initVetDin(TVetDin *V, unsigned size);

// deleta um vetor dinâmico
void deleteVetDin(TVetDin *V);

// lê um vetor dinâmico
void scanVetDin(TVetDin *V);

// escreve um vetor dinâmico
void printVetDin(TVetDin V);

// realoca um vetor dinâmico
void realocaVetDin(TVetDin *V, unsigned newSize);

// MATRIZ  ===========================================
// aloca matriz dinâmica
void InitMatrizDin(TMatDin *M, unsigned lines, unsigned cols);

// scanf na matriz dinamica
void scanMatDin(TMatDin *M);

// printa a matriz
void printMatDin(TMatDin M);

// deleta matriz dinâmica
void deletaMatdin(TMatDin *M);

// le matriz dinâmica
void scanMatDin(TMatDin *M);
