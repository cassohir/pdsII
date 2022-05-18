#include "Celular.hpp"

// Oveloard itr

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

Celular::Celular(std::string modelo, double valor) : _modelo(modelo)
{
}

std::string Celular::to_string() const
{
  // TODO
  return "";
}

bool Celular::vale_mais(const Celular &cel) const
{
  // TODO
  return false;
}

void Celular::altera_valor(double incremento)
{
  // TODO
}