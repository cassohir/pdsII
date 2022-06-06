#include "pizza.hpp"
#include <sstream>

std::string Pizza::descricao() const
{

  auto descricao_pizza = std::stringstream();

  descricao_pizza << this->m_qtd << "X Pizza " << this->sabor << ", " << this->pedacos << " pedacos ";

  if (this->borda_recheada)
  {

    descricao_pizza << "e borda recheada." << std::endl;
  }
  else
  {

    descricao_pizza << "e sem borda recheada." << std::endl;
  }
  return descricao_pizza.str(); // retorno default da pizza
}

Pizza::Pizza(const std::string &sabor,
             int pedacos,
             bool borda_recheada,
             int qtd,
             float valor_unitario)
{

  this->sabor = sabor;
  this->pedacos = pedacos;
  this->borda_recheada = borda_recheada;
  this->m_qtd = qtd;
}