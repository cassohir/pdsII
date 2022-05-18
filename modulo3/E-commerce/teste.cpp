
#include <vector>
#include <iostream>

#include "Celular.hpp"

double maior_valor(std::vector<Celular> &cels)
{
  double maiorValor = 0;

  for (auto itr : cels)
  {
    if (itr.valor() > maiorValor)
    {
      maiorValor = itr.valor();
    }
  }
  return 0;
}

int main()
{
}