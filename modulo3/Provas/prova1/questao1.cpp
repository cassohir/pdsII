#include <list>
#include <string>
#include <iostream>

using namespace std;

list<string> Mesclar(const list<string> &primeira, const list<string> &segunda)
{ // Mescla e ordena duas listas quaisquer.s

    list<string> ordenada;
    list<string>::const_iterator it;

    for (it = primeira.begin(); it != primeira.end(); it++)
    {

        ordenada.push_back(*it);
    }

    for (it = segunda.begin(); it != segunda.end(); it++)
    {

        ordenada.push_back(*it);
    }

    ordenada.sort();

    return ordenada; // Retorna a lista mesclada e ordenada.
}

void imprime_lista(const list<string> &lista)
{ // Imprime uma lista qualquer.

    list<string>::const_iterator it;

    for (it = lista.begin(); it != lista.end(); it++)
    {

        cout << *it << endl;
    }
}

int main()
{

    list<string> list1, list2;

    // Adiciona elementos, desordenadamente, em duas listas para fins de exemplo.
    list1.push_back("DEF");
    list1.push_back("JKL");
    list1.push_back("ABC");

    list2.push_back("MNO");
    list2.push_back("GHI");
    list2.push_back("PQR");

    // Ordena as duas listas (Em ordem alfabética).
    list1.sort();
    list2.sort();

    imprime_lista(Mesclar(list1, list2));
}