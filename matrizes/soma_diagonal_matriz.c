/*
Questão 1:
Escreva um algoritmo que leia uma matriz A de tamanho M (M ≤ 20) e calcule
e imprima a soma de sua diagonal principal e de sua diagonal secundária.
Entrada:
As primeiras duas linhas contém as dimensões da matriz, seu número de
linhas (M) e de colunas (N), respectivamente. As próximas M × N linhas contém os
elementos da matriz, organizados por linhas.
Saída: Escreva a matriz com os valores formatados em um campo de tamanho 2, com
um espaço entre as colunas. A seguir, escreva uma linha em brenco e depois escreva
duas linhas, a primeira contendo o valor da soma da diagonal principal e a segunda
com o valor da soma da diagonal secundária, conforme exemplo abaixo
*/

// j = m - i - 1

#include <stdio.h>

int main(){

    int i, j;
    int sump = 0;
    int sums = 0;
    scanf("%d %d", &i, &j);
    int matriz[i][j];

    for(int ii = 0; ii < i; ii++){
        for(int jj = 0; jj < j; jj++){
            scanf("%d", &matriz[ii][jj]);
        }
    }

    for(int c = 0; c < i; c++){
        sump += matriz[c][c];
        sums += matriz[c][i - c - 1];
    }

    printf("%d %d", sump, sums);
    // printf("%d %d \n %d %d", matriz[1][1], matriz[1][2], matriz[2][1], matriz[2][2]);



    return 0;
}