#include <stdio.h>

int main(){

    float average;
    int isValid, new;
    float notes[2];
    

    int sizeArray = sizeof(notes) / sizeof(notes[1]);
    do{
        for(int c = 0; c < sizeArray; c++){
            do{
                scanf("%f", &notes[c]);
                isValid = (notes[c] >= 0 && notes[c] <= 10);
                if(!isValid) printf("nota invalida\n");
            } while(!isValid);
        }

        average = (notes[0] + notes[1])/sizeArray;
        printf("media = %.2f\n", average);
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &new);
        } while(new > 2 || new < 1);
    } while(new != 2);


    return 0;
}