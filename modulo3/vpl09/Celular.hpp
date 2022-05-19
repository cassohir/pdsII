#ifndef CELULAR_H
#define CELULAR_H

#include <vector>
#include <string>

/**
 * @brief Classe responsavel pelo armazenamento e gerenciamento das informacoes
 * de um celular.
 *
 */
class Celular
{
public:
  std::string _modelo;
  double _valor;
  /**
   * \brief Metodo construtor que inicializa os dados do aparelho celular.
   *
   * Nao eh possivel inicializar um celular com um valor negativo. Caso isso
   * ocorra, o celular recebe o valor zero, e eh impressa a mensagem
   * "Erro: celular com valor negativo.\n" Note que a mensagem termina com um
   * ponto e o caracter de quebra de linha.
   *
   * \param modelo o modelo do telefone, ex.: "motorola"
   * \param valor o valor do telefone, em reais.
   */
  Celular(std::string modelo, double valor)
  {
    }

  /**
   * \brief informa o valor do telefone.
   *
   * \return um double que representa o valor do telefone.
   */
  double valor() const
  {
    return _valor;
  }

  /**
   * \brief produz uma string que representa o telefone. Essa string tem o
   * formato:
   * Modelo: _modelo, Valor: _valor
   *
   * \return a string que representa o telefone.
   */
  std::string to_string() const;

  /**
   * \brief informa se este celular vale mais do que um outro.
   *
   * \param cel o celular contra o qual a comparacao serah feita.
   *
   * \return True caso o valor deste celular seja maior. Se o valor deste
   * celular for menor ou igual, entao retorna o valor falso.
   */
  bool vale_mais(const Celular &cel) const;

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
  void altera_valor(double incremento);

private:
  const std::string _modelo; ///< O modelo do telefone, ex.: Samsung
  double _valor;             ///< O valor do telefone
};

/**
 * \brief Encontra o maior valor de telefone dentre os telefones armazenados
 * em um vetor.
 *
 * \param cels O vetor com os celulares que serao comparados.
 *
 * \return um double que denota o maior valor de um telefone dentre os
 * telefones armazenados no vetor cels.
 */
double maior_valor(std::vector<Celular> &cels);

#endif