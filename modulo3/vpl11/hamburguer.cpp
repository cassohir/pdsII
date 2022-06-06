#include "hamburguer.hpp"
#include <sstream>

std::string Hamburguer::descricao() const
{

  /*
   * Note que aqui voce deve retornar uma descricao detalhada do Hamburguer.
   *
   * Exemplos:
   * 1X Hamburguer X-tudo artesanal.
   * 1X Hamburguer X-tudo simples.
   *
   */
  auto descricao_hamburger = std::stringstream();

  descricao_hamburger << this->m_qtd << "X Hamburguer " << this->tipo;

  if (this->artesanal)
  {

    descricao_hamburger << " artesanal.";
  }
  else
  {

    descricao_hamburger << " simples.";
  }

  return descricao_hamburger.str();
}

Hamburguer::Hamburguer(const std::string &tipo,
                       bool artesanal,
                       int qtd,
                       float valor_unitario)
{

  this->tipo = tipo;
  this->artesanal = artesanal;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;
}