#include <stdio.h>
#define max 50

//função ocorrências

unsigned ocorre(char x, char s[])
{

    if(s[0] == '\0') return 0;    
    else return (s[0] == x) + ocorre(x, &s[1]);
}

int main(){
    char x, s[max];
    unsigned res;
    
    scanf("%c", &x);
    scanf("%s", s);
    
    res = ocorre(x, s);
    
    printf("%u", res);

    return 0;
}