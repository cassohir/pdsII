#include <iostream>
#include "Conjunto.hpp"

// Apenas para verificar o funcionamento do código, a saída deve ser:     0111
//                                                                        1000

// Para compilar: g++ main.cpp Conjunto.cpp Conjunto.hpp -o Conjunto.exe
// Para executar: ./Conjunto.exe

int main()
{

    Conjunto teste;

    teste.Inserir("Vai");
    teste.Inserir("dar");
    teste.Inserir("certo");

    cout << teste.pertence("Eh");
    cout << teste.pertence("Vai");
    cout << teste.pertence("dar");
    cout << teste.pertence("certo") << endl;

    teste.Inserir("Eh");
    teste.Remover("Vai");
    teste.Remover("dar");
    teste.Remover("certo");

    cout << teste.pertence("Eh");
    cout << teste.pertence("Vai");
    cout << teste.pertence("dar");
    cout << teste.pertence("certo") << endl;

    return 0;
}