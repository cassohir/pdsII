#include "Celular.hpp"
#include <iostream>
#include <string>
// Oveloard itr

std::string VerifyParams(double parametro)
{
}

/**
 * \brief Encontra o maior valor de telefone dentre os telefones armazenados
 * em um vetor.
 *
 * \param cels O vetor com os celulares que serao comparados.
 *
 * \return um double que denota o maior valor de um telefone dentre os
 * telefones armazenados no vetor cels.
 */

double maior_valor(std::vector<Celular> &cels)
{
  double maior = 0;
  for (int i = 0; i < cels.size(); i++)
  {
    if (cels[i].valor() > maior)
    {
      maior = cels[i].valor();
    }
  }
  return maior;
}

Celular::Celular(std::string modelo, double valor) : _modelo(modelo)
{
  _valor = valor;
  if (_valor < 0)
  {
    _valor = 0;
    std::cout << "Erro: celular com valor negativo.\n";
  }
}
/**
 * \brief produz uma string que representa o telefone. Essa string tem o
 * formato:
 * Modelo: _modelo, Valor: _valor
 *
 * \return a string que representa o telefone.
 */

std::string Celular::to_string() const
{
  return "Modelo: " + _modelo + ", Valor: " + std::to_string(_valor);
}

/**
 * \brief informa se este celular vale mais do que um outro.
 *
 * \param cel o celular contra o qual a comparacao serah feita.
 *
 * \return True caso o valor deste celular seja maior. Se o valor deste
 * celular for menor ou igual, entao retorna o valor falso.
 */

bool Celular::vale_mais(const Celular &cel) const
{
  return _valor > cel._valor; // Cel é o celular que está sendo comparado...
}

/**
 * \brief adiciona um novo valor ao valor do telefone.
 *
 * Note que o valor de um telefone nao pode ficar negativo. Caso isso venha
 * a ocorrer, o novo valor do telefone deverah ser zero, e a mensagem:
 * "Erro: novo valor negativo.\n" deve ser impressa. Atente para o ponto ao
 * final e a quebra de linha.
 *
 * \param incremento O valor que serah adicionado ao valor deste celular.
 * Note que esse incremento pode ser negativo. Nesse caso, o valor do
 * telefone estarah sendo diminuido.
 */

void Celular::altera_valor(double incremento)
{
  _valor += incremento;
  if (_valor < 0)
  {
    _valor = 0;
    std::cout << "Erro: novo valor negativo.\n";
  }
}
