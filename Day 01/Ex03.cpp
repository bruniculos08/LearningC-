// Classes
#include <iostream>

class Rectangle{
    public:
        void init(float height, float width);
        float getArea();
        bool isSquare();
    private:
        float height, width;
};

// Para definir os métodos da classe (já declarados na definição da classe) deve-se como prefixo o nome da classe...
// ...(seguido de "::" obviamente):
void Rectangle::init(float height, float width){
    (*this).height = height;
    (*this).width = width;
}
// (*this) é como o "self" em outras linguagens de programação orientadas a objeto porém só é necessário caso...
// ... haja conflito no nome de variáveis (entre as do argumento do método e as da classe).

float Rectangle::getArea(){
    return height * width;
}

bool Rectangle::isSquare(){
    if(height == width) return true;
    else return false;
}

int main(){

    // Criando um objeto da classe rectangle:
    Rectangle my_rectangle;
    float hi, wi;

    std::cout << "Insira um altura e uma largura:" << std::endl;
    std::cin >> hi >> wi;

    my_rectangle.init(hi, wi);
    // Para acessar qualquer método ou atributo de uma classe basta se usar o ponto seguido do item que...
    // ... se deseja, assim como em outras linguagens de programação orientadas a objeto.

    std::cout << "Área = " << my_rectangle.getArea() << std::endl;

    bool square_signal = my_rectangle.isSquare();

    if(square_signal) std::cout << "Este retângulo é um quadrado!" << std::endl;
    else std::cout << "Este retângulo não é um quadrado!" << std::endl;

    return 0;
}

// mais informações sobre "cout" em: https://www.quora.com/Is-cout-an-object-or-a-function-Why