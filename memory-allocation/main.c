
#include <stdio.h>
#include <stdlib.h>
#include "ArrayDin.h"

int main(void)
{
        TVetDin A;
	TMatDin M;
        unsigned newS;
	int lines, cols;

       /* printf("Tamanho desejado para o vetor >>>>>>");
        scanf("%u", &A.n);
        initVetDin(&A, A.n);
        scanVetDin(&A);
        printVetDin(A);
        printf("Realocando o tamanho do vetor \n");
        printf("Qual é o novo tamanho? >>>>>");
        scanf("%u", &newS);
        realocaVetDin(&A, newS);
        printf("Vetor realocado \n");
        printVetDin(A);*/


	printf("TAMANHO DESEJADO PARA A MATRIZ >>>>>>>>");
	scanf("%u %u", &lines, &cols);
	InitMatrizDin(&M, lines, cols);
	scanMatDin(&M);
	printMatDin(M);
        return 0;
}
// gcc -std=c99 -c ArrayDin.c -o libArrayDin.o
// ar rv libArrayDin.a ArrayDin.o
// gcc -std=c99 ./main.c -L. libArrayDin.a -o main
// 
