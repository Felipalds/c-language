# Matrizes e Strings
## Vetores
``` sizeof(type) * len ```
C não possui limitações de matrizes, isso é, você pode escrever além do limite. É sua função como programador prover esses limites.

Em C, o nome da matriz é o próprio ponteiro dela.

Em C, você não pode passar uma matriz inteira como argumento de uma função. Você pode somente passar um ponteiro para uma matriz.
Podemos pegar os argumentos de três formas:
1) ``` int function( *matriz ) {} ``` pelo ponteiro em si
2) ``` int function( matriz[10] ) {} ``` pela matriz dimensionada
3) ``` int function( matriz[] ) {} ``` pela matriz não dimensionada
Todas as três formas funcionam de forma idêntica

## Matrizes
``` int matriz[x][y] ```
Tamanho de matrizes: 
``` lines * cols * typeof(type) ```
Para passar matrizes como argumentos para funções, precisamos informar pelo menos o tamanho das linhas (segundo parâmetro). Isso para que o compilador consiga alocar corretamente.
- ``` int function( matriz[][10] ) {} ``` pela matriz dimensionada

