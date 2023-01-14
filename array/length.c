#include <stdio.h>

int main(){

    // int is 4 bytes each
    int favNumbers[5] = {1, 2, 3, 4, 5};

    // so, sizeArray in bytes is 4 * 5 bytes
    int sizeArrayinBytes = sizeof(favNumbers);
    printf("array has %d bytes \n", sizeArrayinBytes);

    int sizeEachElement = sizeof(favNumbers[2]);
    printf("each element has %d bytes \n", sizeEachElement);

    float sizeArray = sizeArrayinBytes / sizeEachElement;
    printf("my array has %.0f elements \n", sizeArray);
    

    return 0;
}