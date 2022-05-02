# Ponteiros em C
Em C, ponteiros e matrizes estão intimamente relacionados.
O ponteiro para o primeiro elemento de um array é o próprio nome do array, mas podemos também passar assim:
- &p[0] // endereço da posição 0 do array
Em matrizes, devemos passar assim:
- nome_matriz ou &nome_matriz[0][0];

## O que é
- Ponteiros são variáveis que contém endereços de memória. Esse endereço é normalmente a posição de uma outra variável
- & devolve o endereço de memória de certa variável
- "*" é o complemento de &. É um operador que devolve o valor da variável localizada no endereço que se segue