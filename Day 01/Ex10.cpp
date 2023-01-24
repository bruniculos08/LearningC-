// Array (é praticamente igual em C)

#include <iostream>

int main(){
    int src[] = {2, 4, 5, 7};
    int dest[10];
    std::copy(src, src+4, dest);

    for(int i=0; i<10; i++) std::cout << dest[i] << std::endl;

    std::cout << "\n" << *src << "\n" << *dest << std::endl;

    int s_size = sizeof(src)/sizeof(*src);
    int d_size = sizeof(dest)/sizeof(*dest);

    std::cout << "\n" << s_size << "\n" << d_size << std::endl;

    std::cout << src[4];

    int *values = new int[10];

    delete[] values;
}


/*

Respostas para algumas dúvidas frequentes:
(1) https://www.youtube.com/watch?v=yo671zcRZr8&ab_channel=ThePolyglotDeveloper
(2) https://stackoverflow.com/questions/14513535/warning-deleting-array-in-load-file-function
(3) https://stackoverflow.com/questions/20397360/adding-int-to-address-causes-int-to-be-added-4-times

Obs.: sim, quando um inteiro é adicionado a um endereço ele é adicionado 4 vezes (x*sizeof(x)); mais sobre no...
... link 3.

*/