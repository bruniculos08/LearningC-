// Sobre char
#include <iostream>

int main(){

    char x = 'A';
    // Podemos explicitar o tipo do dado em parenteses ao passar para um objeto por exemplo:
    std::cout << (int) x << std::endl;
    // Neste caso, como x é do tipo char e igual a 'A' ele será printado como 65 que o valor que representa 'A'...
    // ... na tabela ASCII.

    // Lembre-se: há unsigned e signed (usa complemento 2) char pois um char tem 1 byte (isso talvez seja útil algum dia). 

    return 0;
}