// Vetores (classe)
#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> list;

    for(int i=0; i<5; i++) list.push_back(i);

    cout << "Imprimindo o vetor do começo ao final" << endl;


    for(auto v = list.begin(); v != list.end(); v++){
    // O tipo "auto" aceita qualquer tipo que a variável receba (é dado na inicialização da variável);
        cout << *v << endl;
    // v é um iterator que passa pelo vetor, assim v++ incrementa o iterator fazendo ele...
    // ... "andar" pelo vetor.

    // Obs. (Teoria minha): imagino que a classe do iterator contenha o endereço do objeto (vetor nesse caso) e quando...
    // ... se faz v++ este endereço é incrementado dentro do objeto de acordo com o tipo de dados do vetor para o...
    // ... iterator foi criado.
    }

    return 0;
}