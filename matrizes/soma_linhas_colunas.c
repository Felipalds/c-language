/*
Questão 5:
Escreva um algoritmo que leia uma matriz de m linhas por n colunas, (0 <
m, n ≤ 100). A seguir, crie dois vetores, SomaLinha e somaColunas, os quais devem ser
preenchidos com as somas de cada linha e de cada coluna, respectivamente,
conforme a figura abaixo
*/

#include <stdio.h>

int main(){

    int m, n;
    while(scanf("%d %d", &m, &n) && (m != 0 && n != 0)){
        int matriz[m][n];
        int somaColunas[n];
        int somaLinhas[m];

        for(int l = 0; l < m; l++)
            somaLinhas[l] = 0;
        for(int col = 0; col < n; col++)
            somaColunas[col] = 0;

        for(int linhas = 0; linhas < m; linhas++){
            for(int colunas = 0; colunas < n; colunas++){ 
                scanf("%d", &matriz[linhas][colunas]);
                somaColunas[colunas] = somaColunas[colunas] + matriz[linhas][colunas];
                somaLinhas[linhas] = somaLinhas[linhas] + matriz[linhas][colunas];
            }
        }

        for(int linhas = 0; linhas < m; linhas++){
            for(int colunas = 0; colunas < n; colunas++){ 
                printf("%d ", matriz[linhas][colunas]);
            }
            printf("\n");
        }

        printf("Soma Linhas \n");
        for(int c = 0; c < n; c++)
            printf("%d ", somaLinhas[c]);

        printf("\nSoma Colunas \n");
        for(int c = 0; c < n; c++)
            printf("%d ", somaColunas[c]);
    }
}