#include "venda.hpp"

#include <iomanip>

Venda::~Venda()
{
  for (auto pedido : m_pedidos)
  {
    delete pedido;
  }

  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_pedidos
   */
}

void Venda::adicionaPedido(Pedido *p)
{
  this->m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const
{
  size_t pedido_indice = 1; // Armazena os indices dos produtos (nesse caso inicia no 1 mesmo)

  float soma_produtos = 0; // Armazena as somas dos produtos

  for (auto &pedido : this->m_pedidos)
  {
    std::cout << "Pedido " << pedido_indice++ << '\n';
    std::cout << pedido->resumo();
    soma_produtos += pedido->calculaTotal();
  }

  std::cout << "Relatorio de Vendas\n";

  std::cout << "Total de vendas: R$ " << std::fixed << std::setprecision(2) << soma_produtos << "\n";

  std::cout << "Total de pedidos: " << this->m_pedidos.size() << "\n";
}