// Namespace
#include <iostream>

int main(){
    // std signifca starndart e é uma namespace, que é basicamente um conjunto de código (importado de algum arquivo),...
    // ... ou seja, quando usamos tal prefixo, ele indica que o item (objeto, função, ou variável) seguinte vem do... 
    // ... namespace prefixado.
    std::cout << "Hello World!";
    // neste caso "cout" é um objeto (global) da classe ostream (definida na biblioteca iostream) que utilizado para...
    // ... enviar um dado para a saída padrão (normalmente o terminal no qual o programa está sendo executado).

    // obs.: "<<" é um operador que para a classe do objeto cout tem a função de printar o está a direita na saída padrão.
    //       Em C++ operadores são customizáveis, por isso o operador "<<" pode ser usado desta maneira.


    return 0;
}

// mais informações sobre "cout" em: https://www.quora.com/Is-cout-an-object-or-a-function-Why