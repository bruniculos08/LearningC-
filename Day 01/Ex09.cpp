// Templates: permitem que funções ou classes sejam reutilizadas com diferentes tipos ou classes (usando...
// ... um tipo ou classe genérico)
#include <iostream>

template <typename T>
T getMax(T a, T b) { 
    return a > b ? a : b;
}

template <class T>
T getMin(T a, T b) { 
    return a < b ? a : b;
}

// Obs.: por algum motivo neste caso funciona tanto usar typename quanto class para as funções getMax e getMin

// Criando uma classe com tipo genérico (como a classe vector é):
template <class T, class B>
class Pair{
    T x, y;
    public:
        // Este método é o método construtor da classe, logo ele é usado na declaração do objeto, ou seja, ...
        // ... a declaração do objeto irá receber os argumentos a e b de tipo ou classe genéricos.
        Pair(T a, T b){ x = a; y = b; };
        T getMax();
};
// (1) Note portanto que a classe Pair usa uma classe genérica T e outra classe genérica B (esta última não é usada...
// ... dentro da classe, existe apenas para fim de exemplo).
// (2) Note que quando se usa o comando template, a classe ou função que vier após este comando poderá utilizar os...
// ... tipos ou classes genéricos, mas o que vier depois não sendo necessário repetir o comando de template.

template <class T, class B>
// A seguir, para a definição da função "getMax", após o nome da classe é necessário passar 2 tipos e/ou classes dentro...
// ... de "<>" pois a classe Pair usa 2 tipos e/ou classes genéricos:
T Pair<T, B>::getMax(){
// Esta função considera (respectivamente) que os tipos ou classe de Pair são T e B e retorna o tipo T.
    T ret = x>y?x:y;
    return ret;
}

int main(){

    int a, b;
    std::cin >> a >> b;

    float x, y;
    std::cin >> x >> y;

    auto i = getMax(a, b);
    auto j = getMax(x, y);

    std::cout << "i = " << i << ", j = " << j << std::endl;

    i = getMin(a, b);
    j = getMin(x, y);

    std::cout << "i = " << i << ", j = " << j << std::endl;

    Pair<int, float> theMax(1, 2);
    // Note aqui o uso do método construtor com argumentos na declaração do objeto theMax.
    std::cout << theMax.getMax() << std::endl;

    return 0;
}

// Obs.: para templates as keywords typename e class são equivalentes... 
// ... segundo: https://stackoverflow.com/questions/2023977/difference-of-keywords-typename-and-class-in-templates