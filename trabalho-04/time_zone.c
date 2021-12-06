#include <stdio.h>

int main(){

    int current, travel, timezone, local;

    scanf("%d %d %d", &current, &travel, &timezone);

    local = current + travel + timezone;

    if(local == 24)
        local = 0;
    else if(local > 24)
        local -= 24;
    else if(local < 0)
        local += 24;
    
    printf("%d\n", local);


    return 0;
}