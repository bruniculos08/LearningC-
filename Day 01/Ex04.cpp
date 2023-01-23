// Herança
#include <iostream>

class Rectangle{
    public:
        void init(float height, float width);
        float getArea();
        bool isSquare();
    protected:
    // atributos ou métodos protegidos são como os privados porém podem ser acessados por classes "amigas" ou iguais...
    // ... (o que é diferente de classes herdeiras):
        float height, width;
};

void Rectangle::init(float hi, float wi){
    height = hi;
    width = wi;
}

float Rectangle::getArea(){
    return height * width;
}

bool Rectangle::isSquare(){
    if(height == width) return true;
    else return false;
}

// Criando uma classe que herda a classe retângulo (apenas os métodos públicos e protegidos podem ser acessados
// ... na classe herdeira):
class Square: public Rectangle{
    public:
        // Para redefinir um método da classe mãe este deve ser declarado denovo na classe herdeira:
        void init(float height, float width);
};

void Square::init(float hi, float wi){
    // Como no quadrado a altura e largura são iguais:
    height = width = hi;
}

int main(){

    Square my_square;
    float hi, wi;

    std::cout << "Insira um tamanho e uma largura:" << std::endl;
    // Passando uma entrada para duas variáveis:
    std::cin >> hi, wi;

    my_square.init(hi, wi);

    std::cout << "Área = " << my_square.getArea() << std::endl;

    bool square_signal = my_square.isSquare();

    if(square_signal) std::cout << "Este quadrado é um quadrado!" << std::endl;
    else std::cout << "Este quadrado não é um quadrado!" << std::endl;

    return 0;
}

// mais informações sobre "cout" em: https://www.quora.com/Is-cout-an-object-or-a-function-Why