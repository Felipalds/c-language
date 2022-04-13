
#include <stdio.h>
unsigned int fat(unsigned int x){
    int k = 1;
    for(int i = 2; i <= x; i++){
        k = k * i;
    }
    return k;
}

unsigned fib(unsigned n){
    int f0 = 1;
    int f1 = 1;
    int fib = 1;
    if(n < 3){
        fib = 1;
    } else {
       for(int k = 3; k <= n ; k++){
        fib = f1 + f0;
        f0 = f1;
        f1 = fib;
    } 
    }
    
    return fib;
}


int main()
{
    printf("Hello World");
    unsigned int x;
    
    while(scanf("%u", &x) && x > 0){
        printf("%u no fibonacci é %u\n", x, fib(x));
        printf("%u! é %u \n", x, fat(x));
        printf("a soma dos dois é %u \n", fat(x) + fib(x));
    }
    return 0;
}

