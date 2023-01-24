// Array (em C)
#include <stdio.h>
#include <stdlib.h>

int main(){
    // int src[] = {2, 4, 5, 7};
    int *src;
    src = (int *)malloc(sizeof(int)*4);
    *(src) = 2;
    *(src + 1) =  4;
    *(src + 2) =  5;
    *(src + 3) =  7;

    printf("%i\n", src[1]);
    printf("%i\n", &src[0]);
    printf("%i\n", &src[1]);
    printf("%i\n", &src[1]-&src[0]);
    printf("%i\n", &src[1] + 1);
}


/*

Respostas para algumas dúvidas frequentes:
(1) https://www.youtube.com/watch?v=yo671zcRZr8&ab_channel=ThePolyglotDeveloper
(2) https://stackoverflow.com/questions/14513535/warning-deleting-array-in-load-file-function

*/