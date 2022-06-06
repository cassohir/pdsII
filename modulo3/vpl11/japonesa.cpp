#include "japonesa.hpp"
#include <sstream>

std::string Japonesa::descricao() const
{

  auto descricao_japonesa = std::stringstream();

  descricao_japonesa << this->m_qtd << "X Comida Japonesa " << this->combinado << ", " << this->sushi << " sushis, " << this->temaki << " temakis e " << this->hots << " hots.";

  /*
   * Note que aqui voce deve retornar uma descricao detalhada da comida
   * japonesa.
   *
   * Exemplos:
   * 1X Comida japonesa - Combo 1, 4 sushis, 5 temakis e 6 hots.
   * 1X Comida japonesa - Combo 2, 5 sushis, 6 temakis e 8 hots.
   */

  return descricao_japonesa.str();
}

Japonesa::Japonesa(const std::string &combinado,
                   int sushis,
                   int temakis,
                   int hots,
                   int qtd,
                   float valor_unitario)
{

  this->combinado = combinado;
  this->sushi = sushis;
  this->temaki = temakis;
  this->hots = hots;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;
}