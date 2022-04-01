/*
Questão 9: Escreva uma função recursiva palindrom(s, n), que receba uma cadeia de caracteres s e seu comprimento n, e verifique se a mesma é um palíndromo(palíndromes são cadeias de caracteres ou expressões que podem ser lidas da mesma maneira, de frente para trás e de trás para frente; 

exemplo: “ovo”, “arara”, “socorram  me  subi  no onibusem marrocos”, “anotaram  a  data  da maratona”, “acararajada da jararaca”).
*/

#include <stdio.h>
#include <string.h>

char S[100];
char newS[100];

int removerEspacos(char *S, int n){
    int j = 0;
    for(int c = 0; c < n - 1; c++){
        if(S[c] != ' '){
            S[j++] = S[c];
        }
    }
    S[j+1] = '\0';

}

int isPalind(char *S, int cresc, int decresc){
    if(S[cresc] != S[decresc]) return 0;
    if(cresc > decresc) return 1;
    if(S[cresc] == S[decresc]) return isPalind(S, cresc + 1, decresc - 1);
}

int main(){

    scanf("%[^\n]s", S);
    int tamanho = strlen(S);

    removerEspacos(S, tamanho);
    tamanho = strlen(S);
    int crescente = 0;
    int decrescente = (tamanho - 1);

    printf("%s\n", S);
    isPalind(S, crescente, decrescente) ? printf("palindromo") : printf("não");

    printf("%s", newS);

    return 0;
}