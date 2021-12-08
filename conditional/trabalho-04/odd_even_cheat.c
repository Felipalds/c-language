#include <stdio.h>

int main(){

    int choice, p1, p2, cheat, accuse;
    int result, winner;

    scanf("%d %d %d %d %d", &choice, &p1, &p2, &cheat, &accuse);

    result = p1 + p2;

    if(cheat == 1 && accuse == 0)
        winner = 1;
    else if(cheat == 1 && accuse == 1)
        winner = 2;
    else if(cheat == 0 && accuse == 1)
        winner = 1;
    else if(cheat == 0 && accuse == 0){
        if(choice == result % 2)
            winner = 2;
        else
            winner = 1;
    }

    printf("Jogador %d ganha!\n", winner);

    return 0;
}