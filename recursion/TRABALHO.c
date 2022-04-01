// LUIZ FELIPE FONSECA ROSA
// GUSTAVO PORTELA RAUTENBERG
// TRABALHO DE ALGORITMOS DATA: 01/04/2022

// A questão 06 pode demorar caso os valores sejam grandes.

#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX 50


int soma(int a, int b){
    if(b == 0) return a; 
    else return 1 + soma(a, b-1);
}

unsigned mult(unsigned a, unsigned b){
    unsigned soma = 0;
    
    if(b == 0) return 0;
    else return a + mult(a, b - 1);
}

float f1(int n){
    float soma = 0;
    if (n == 1){
        return 1;
    } else{
        soma = 1.0/n;
        n--;
        soma += f1(n);
        return soma;
    }
}

float f2(int n){
    float soma = 0;
    if (n == 1){
        return (2/3);
    } else {
        soma = (pow(n, 2)+1.0)/(n+3);
        n--;
        soma += f2(n);
        return soma;
    }  
}

float f3(unsigned n){
    if(n < 3) return n;
    return 2*f3(n-1) + 3*f3(n-2);
}

unsigned ack(unsigned m, unsigned n){
    if(m == 0) return n + 1;
    if(m != 0){
        if(n == 0) return ack(m - 1, 1);
        else return ack(m-1, ack(m, n - 1));
    } 
}

unsigned  mdc(unsigned x, unsigned y){
    if(y == 0) return x;
    else return mdc(y,x%y);
}

float Vet[100];
float somaVet(float *V, int n){
    if(n == 0) return V[n];
    return V[n] + somaVet(V, n - 1);
}

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

unsigned ocorre(char x, char s[]){
    if(s[0] == '\0') return 0;    
    else return (s[0] == x) + ocorre(x, &s[1]);
}

int main(){
    int q;
    printf("===============\n");
    printf("TESTAR QUESTÃO:");
    scanf("%d", &q);
    printf("===============\n");
    if(q == 1){
        int num1, num2;
        int total;
        scanf("%d%d", &num1, &num2);
        total = soma(num1, num2);
        printf("%d", total);
        return 0;
    }
    if(q == 2){
        unsigned a = 0, b = 0;
        unsigned res = 0;
        scanf("%u %u", &a, &b);
        res = mult(a, b);
        printf("Res = %u\n", res);
        return 0;
    }
    if(q == 3){
        int n;
        float soma;
        scanf("%d", &n);
        soma = f1(n);
        printf("%.2f\n", soma);
        return 0;
    }
    if(q == 4){
        int n;
        float soma;
        scanf("%d", &n);
        soma = f2(n);
        printf("%.2f\n", soma);
        return 0;
    }
    if(q == 5){
        unsigned n;
        scanf("%d", &n);
        printf("%f", f3(n));
        return 0;
    }
    if(q == 6){
        int m, n;
        scanf("%d %d", &m, &n);
        printf("\n%u\n", ack(m, n));

        return 0;
    }
    if(q == 7){
        unsigned  x, y, res;
        scanf("%u %u", &x, &y); 
        res = mdc(x, y);
        printf("Reposta: %u", res);
        return 0;
    }
    if(q == 8){
        int len;
        float aux, total;
        scanf("%d", &len);
        for(int i=0; i<len; i++) {
            scanf("%f", &aux);
            Vet[i] = aux;
        }
        printf("%.1f", somaVet(Vet, len));

        return 0;
    }
    if(q == 9){
        getchar();
        scanf("%[^\n]s", S);
        int tamanho = strlen(S);

        removerEspacos(S, tamanho);
        tamanho = strlen(S);
        int crescente = 0;
        int decrescente = (tamanho - 1);

        isPalind(S, crescente, decrescente) ? printf("palindromo") : printf("não");

        printf("%s", newS);

        return 0;
    }
    if(q == 10){
        getchar();
        char x, s[50];
        unsigned res;
        
        scanf("%c", &x);
        scanf("%s", s);
        
        res = ocorre(x, s);
        
        printf("%u", res);

        return 0;
    }

    return 0;
}