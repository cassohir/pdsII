#include "Conjunto.hpp"

Conjunto::Conjunto() {

    primeiro_ = nullptr;
}

bool Conjunto::vazio() {
    
    if (primeiro_ == nullptr) {

        return true;
    }
    
    return false;
}

bool Conjunto::pertence(string s) {

    bool pertence_ = false;
    No* it;

    for (it = primeiro_; it != nullptr; it = it->proximo) {

        if (it->chave == s) {
            
            pertence_ = true;
            return pertence_;
        }
    }

    return pertence_;
}

// 2b) Como não foi especificado, irei inserir os elementos no início do conjunto.
void Conjunto::Inserir(string s) {

    if (!this->pertence(s)) {

        No* aux = new No;
        aux->chave = s;
        aux->proximo = nullptr;
        aux->anterior = nullptr;

        if (this->vazio()) {//Testa se o conjunto está vazio.

            primeiro_ = aux;
        }else {//Se não estiver vazio, adiciona o elemento no início.

            aux->proximo = primeiro_;
            primeiro_->anterior = aux;
            primeiro_=aux;
        }
    }
}

// 2a)
void Conjunto::Remover(string s) {

    No* it;
    No* aux;

    for (it = primeiro_; it != nullptr; it = aux) {

        aux = it->proximo;

        if (it->chave == s) {
            
            if (it->anterior == nullptr && it->proximo == nullptr) {//Se for o único elemento do conjunto.

                primeiro_ = nullptr;
                delete it;

            }else if (it->anterior == nullptr) {//Primeiro.

                primeiro_ = it->proximo;
                primeiro_->anterior = nullptr;
                delete it;

            }else if (it->proximo == nullptr) {//Último.

                it->anterior->proximo = nullptr;
                delete it;

            }else {//No meio do conjunto.

                it->anterior->proximo = it->proximo;
                it->proximo->anterior = it->anterior;
                delete it;
            }
        }
    }
}

Conjunto::~Conjunto() {

    No* it;
    No* aux;

    for (it = primeiro_; it != nullptr; it = aux) {

        aux = it->proximo;
        delete it;
    }
}