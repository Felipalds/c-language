#include <stdio.h>

int main(){

    int x;
    while(scanf("%d", &x) && (x != -1)){

        x++;
        int matriz[x][x];
        for(int linhas = 0; linhas < x; linhas++){
            for(int colunas = 0; colunas < x; colunas++){
                matriz[linhas][colunas] = 0;
            }
        }

        for(int linhas = 0; linhas < x; linhas++){
            for(int colunas = 0; colunas < linhas; colunas++){
                if(colunas == 0){
                    matriz[linhas][colunas] = 1;
                } else {
                    matriz[linhas][colunas] = matriz[linhas - 1][colunas] + matriz[linhas - 1][colunas - 1];
                }
            }
        }
        
    
        for(int a = 0; a < x; a++){
            for(int b = 0; b < a; b++){
                if(matriz[a][b] != 0)
                    printf("%d ", matriz[a][b]);
            }
            printf("\n");
        }
        
    }

    return 0;
}