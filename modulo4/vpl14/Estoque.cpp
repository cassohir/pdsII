#include <string>
#include <set>
#include <vector>
#include <map>
#include <iostream>
#include <iomanip>

#include "Estoque.hpp"

void Estoque::add_mercadoria(const std::string &mercadoria, unsigned int qtd)
{

  if (qtd == 0)
  {
    std::cout << "Erro: quantidade nula.\n";
  }
  else
  {
    if (mercadorias.find(mercadoria) == mercadorias.end())
    {
      mercadorias[mercadoria] = qtd;
    }
    else
    {
      mercadorias[mercadoria] += qtd;
    }
  }
}

void Estoque::sub_mercadoria(const std::string &mercadoria, unsigned int qtd)
{

  if (qtd == 0)
  {
    std::cout << "Erro: quantidade nula.\n";
  }
  else
  {
    if (mercadorias.find(mercadoria) == mercadorias.end())
    {
      std::cout << mercadoria << " inexistente.\n";
    }
    else
    {
      if (mercadorias[mercadoria] < qtd)
      {
        std::cout << mercadoria << " insuficiente";
      }
      else
      {
        mercadorias[mercadoria] -= qtd;
      }
    }
  }
}

unsigned int Estoque::get_qtd(const std::string &mercadoria) const
{

  if (mercadorias.find(mercadoria) == mercadorias.end())
  {
    std::cout << mercadoria << " inexistente.\n";
    return 0;
  }
  else
  {
    return mercadorias.at(mercadoria);
  }
}

void Estoque::imprime_estoque() const
{

  for (auto it = mercadorias.begin(); it != mercadorias.end(); ++it)
  {
    std::cout << it->first << ": " << it->second << std::endl;
  }

  std::cout << std::endl;
}

Estoque &Estoque::operator+=(const Estoque &rhs)
{

  for (auto it = rhs.mercadorias.begin(); it != rhs.mercadorias.end(); ++it)
  {
    if (mercadorias.find(it->first) == mercadorias.end())
    {
      mercadorias[it->first] = it->second;
    }
    else
    {
      mercadorias[it->first] += it->second;
    }
  }

  return *this;
}

Estoque &Estoque::operator-=(const Estoque &rhs)
{

  for (auto it = rhs.mercadorias.begin(); it != rhs.mercadorias.end(); ++it)
  {
    if (mercadorias.find(it->first) == mercadorias.end())
    {
      std::cout << it->first << " inexistente.\n";
    }
    else
    {
      if (mercadorias[it->first] < it->second)
      {
        std::cout << it->first << " insuficiente.\n";
      }
      else
      {
        mercadorias[it->first] -= it->second;
      }
    }
  }

  return *this;
}

bool operator<(Estoque &lhs, Estoque &rhs)
{

  for (auto it = lhs.mercadorias.begin(); it != lhs.mercadorias.end(); ++it)
  {
    if (rhs.mercadorias.find(it->first) == rhs.mercadorias.end())
    {
      return false;
    }
    else
    {
      if (it->second < rhs.mercadorias[it->first])
      {
        return false;
      }
    }
  }

  return true;
}

bool operator>(Estoque &lhs, Estoque &rhs)
{

  for (auto it = lhs.mercadorias.begin(); it != lhs.mercadorias.end(); ++it)
  {
    if (rhs.mercadorias.find(it->first) == rhs.mercadorias.end())
    {
      return false;
    }
    else
    {
      if (it->second > rhs.mercadorias[it->first])
      {
        return false;
      }
    }
  }

  return true;
}