// Atributo estático
#include "iostream"

// Um atributo estático é a mesma variável para todos os objetos da classe:
class OneDolar{
    public:
        static float value;
        float getValue();
};

// É necessário alocar espaço para a variável estática para que ela possa ser usada em métodos da classe:
float OneDolar::value = 0;
// Onde encontrei essa solução: https://forum.arduino.cc/t/error-undefined-reference-to-a-static-variable/969927/2

float OneDolar::getValue(){
    return OneDolar::value;
};

int main(){

    OneDolar::value = 1;
    OneDolar coin;
    OneDolar note;
    std::cout << coin.getValue() << std::endl;
    std::cout << note.getValue() << std::endl;

    return 0;
}