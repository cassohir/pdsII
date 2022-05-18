/*
 * Atencao: Este arquivo nao precisa (e nao deve) ser alterado.
 */

#include <vector>
#include <iostream>

#include "Celular.hpp"

void testa_construtor() {
  std::string modelo;
  double valor;
  std::cin >> modelo >> valor;
  Celular cel(modelo, valor);
  std::cout << cel.valor() << std::endl;
}

void testa_altera_valor() {
  std::string modelo;
  double valor;
  std::cin >> modelo >> valor;
  Celular cel(modelo, valor);
  std::cout << cel.valor() << std::endl;
  std::cin >> valor;
  cel.altera_valor(valor);
  std::cout << cel.valor() << std::endl;
}

void testa_vale_mais() {
  std::string modelo;
  double valor;
  std::cin >> modelo >> valor;
  Celular cel0(modelo, valor);
  std::cin >> modelo >> valor;
  Celular cel1(modelo, valor);
  if (cel0.vale_mais(cel1)) {
    std::cout << "O primeiro celular vale mais.\n";
  } else {
    std::cout << "O primeiro celular nao vale mais.\n";
  }
}

void testa_to_string() {
  std::string modelo;
  double valor;
  while (std::cin >> modelo >> valor) {
    Celular cel(modelo, valor);
    std::cout << cel.to_string() << std::endl;
  }
}

void testa_maior_valor() {
  std::string modelo;
  double valor;
  std::vector<Celular> cels;
  while (std::cin >> modelo >> valor) {
    Celular cel(modelo, valor);
    cels.push_back(cel);
  }
  std::cout << "Maior valor: " << maior_valor(cels) << std::endl;
}

int main() {
  char test = 0;
  std::cin >> test;
  switch(test) {
    case 'c': {
      testa_construtor();
      break;
    }
    case 'a': {
      testa_altera_valor();
      break;
    }
    case 'm': {
      testa_vale_mais();
      break;
    }
    case 't': {
      testa_to_string();
      break;
    }
    case 'v': {
      testa_maior_valor();
      break;
    }
  }
}