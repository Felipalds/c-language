#include <stdio.h>

// função mdc

unsigned  mdc(unsigned x, unsigned y){
    if(y == 0) return x;
    else return mdc(y,x%y);
}
int main(){
    unsigned  x, y, res;
    scanf("%u %u", &x, &y); 
    res = mdc(x, y);
    printf("Reposta: %u", res);
    return 0;
}