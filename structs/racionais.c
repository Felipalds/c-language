// ler dois numeros racionais e um simbolo de operacao, e realizar a operacao dada pelo simbolo
// entrada: numerador, denominador, sinal, numerador, denominador

#include <stdio.h>

typedef struct
{
    int num;
    int den;
} TRacional;

int main(){
    // declaracao de variaveis
    TRacional X = {0, 0}, Y = {0, 0}, R = {0, 0}; // zerando as variaveis
    char op;
    int resto, num, den;

    // EOF é o ctrl + d
    while(scanf("%d/%d %c %d/%d", &X.num, &X.den, &op, &Y.num, &Y.den) != EOF){
        switch(op)
        {
            case '+':
                R.num = (X.num * Y.den) + (X.den * Y.num);
                R.den = (X.den * Y.den);
                break;
            case '-':
                R.num = (X.num * Y.den) - (X.den * Y.num);
                R.den = (X.den * Y.den);
                break;
            case '*':
                R.num = X.num * Y.num;
                R.den = X.den * Y.den;
                break;
            case '/':
                R.num = X.num * Y.den;
                R.den = X.den * Y.num;
                break;
            default:
                printf("Erro: operação inválida! \n");
        }
        while(den != 0){
            num = R.num;
            den = R.den;
            resto = num % den;
            num = den;
            den = resto;
        }
        R.num = R.num / num;
        R.den = R.den / num;
        printf("%d/%d", R.num, R.den);
    }

    return 0;
}