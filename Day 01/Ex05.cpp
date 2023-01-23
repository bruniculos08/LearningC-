// Classes amigas
#include <iostream>

class Square;
class Rectangle;
void grow(Rectangle *r, float percentage);

class Rectangle{
    public:
        void init(float height, float width);
        float getArea();
        bool isSquare();
        void convert(Square sq);
        // Uma função "amiga" é uma função que é definida fora da classe (não pertence a classe) mas quanto aos objetos...
        // ... desta classe pode acessar todos os atributos ou métodos mesmo não sendo públicos:
        friend void grow(Rectangle *r, float percentage);
    protected:
    // atributos ou métodos protegidos são como os privados porém podem ser acessados por classes "amigas" ou iguais...
    // ... (o que é diferente de classes herdeiras):
        float height, width;
};

void Rectangle::init(float hi, float wi){
    height = hi;
    width = wi;
}

void grow(Rectangle *r, float percentage){
    (*r).height = (1 + percentage/100) * (*r).height;
    (*r).width = (1 + percentage/100) * (*r).width;
}

float Rectangle::getArea(){
    return height * width;
}

bool Rectangle::isSquare(){
    if(height == width) return true;
    else return false;
}

class Square{
    public:
        void init(float side);
        // Como a classe Rectangle é "amiga" ela pode acessar os atributos privados e/ou protegidos da classe Square;
        friend class Rectangle;
    private:
        float side;
};

void Square::init(float side){
    (*this).side = side;
}

// O seguinte método pode acessar o atributo side pois a classe Rectangle é uma classe "amiga" da classe Square:
void Rectangle::convert(Square sq){
    height = sq.side;
    width = sq.side;
}

int main(){

    Rectangle my_rectangle;
    Square my_square;

    // A partir de um objeto da classe Square setar os atributos do objeto da classe Rectangle:
    my_square.init(2);
    my_rectangle.convert(my_square);
    
    // Dobrando o tamanho do retângulo:
    grow(&my_rectangle, 100);

    std::cout << "Área = " << my_rectangle.getArea() << std::endl;

    bool square_signal = my_rectangle.isSquare();

    if(square_signal) std::cout << "Este retângulo é um quadrado!" << std::endl;
    else std::cout << "Este retângulo não é um quadrado!" << std::endl;

    return 0;
}

// mais informações sobre "cout" em: https://www.quora.com/Is-cout-an-object-or-a-function-Why