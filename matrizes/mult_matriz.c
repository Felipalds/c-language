/*
Questão 2:
Escreva um algoritmo que leia duas matrizes, A m×n e B p×q e realize a operação
de multiplicação das matrizes, criando uma nova matriz C m×q .
Entrada:
As primeiras duas linhas contém as dimensões da matriz A, seu número de
linhas (m) e de colunas (n), respectivamente. As próximas m × n linhas contém os
elementos da matriz, organizados por linhas. As próximas duas linhas contém as
dimensões da matriz B, seu número de linhas (p) e de colunas (q), respectivamente.
As próximas M × N linhas contém os elementos da matriz, organizados por linhas.
As matrizes tem dimensões máximas de 20 linhas e 20 colunas.
*/

#include <stdio.h>

int main(){


    int i, j;
    scanf("%d %d", i, j);
    int matriz_a[i][j];
    for(int c = 0; c < i; c++){
        for(int g = 0; g < j; g++){
            scanf("%d", &matriz_a[i][j]);
        }
    }

    int x, y;
    scanf("%d %d", x, y);
    int matriz_b[x][y];
    for(int c = 0; c < x; c++){
        for(int g = 0; g < y; g++){
            scanf("%d", &matriz_b[x][y]);
        }
    }

    if(y != i){
        printf("Não é possível multiplicar as matrizes");
    } else {
        
    }

    return 0;
}