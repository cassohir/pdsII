#include "pedido.hpp"

Pedido::~Pedido()
{

  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_produtos
   */
  for (auto &iterador_produtos : this->m_produtos) // testar no arquivo de teste.cpp
  {
    delete iterador_produtos;
  }
}

void Pedido::setEndereco(const std::string &endereco)
{
  this->m_endereco = endereco;
}

float Pedido::calculaTotal() const
{
  float soma_produtos = 0; // Armazena as somas dos produtos
  for (auto &produto : this->m_produtos)
  {
    // Da pra usar as proprias funcoes aqui
    soma_produtos += produto->getValor() * produto->getQtd();
    return soma_produtos;
  }
}

void Pedido::adicionaProduto(Produto *p)
{
  this->m_produtos.push_back(p);
}

std::string Pedido::resumo() const
{

  // TEstar com stringstream (stackoverflow, auto || std::string)  1º ... [2º ;..]
  auto saida_produtos = std::stringstream();

  for (auto &produto : this->m_produtos)
  {

    saida_produtos << produto->descricao() << '\n';
    saida_produtos << "Endereco: " << this->m_endereco << '\n';
    // saida_produtos << "Total: " << this->calculaTotal() << '\n';
    return saida_produtos.str();
  }
}