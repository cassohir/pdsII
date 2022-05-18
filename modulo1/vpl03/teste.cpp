#include <iostream>
#include <cmath>

/**
 * @brief Calcula o fatorial de um numero inteiro
 *
 * Esta funcao nao faz tratamento de erros: se o numero passado como parametro
 * for igual ou menor a zero, entao ela retorna o valor 1.
 *
 * @param arg O numero cujo fatorial sera calculado
 * @return unsigned O valor do fatorial de arg. Se arg for igual ou menor a
 * zero, entao o valor retornado deve ser 1.
 */
unsigned factorial(int arg)
{
  int fact = 1;
  while (arg > 1)
  {
    fact *= arg--;
  }

  if (arg <= 0)
  {
    return 1;
  }
  return fact;
}

/**
 * @brief Conta a quantidade de inteiros em um certo interval.
 *
 * O intervalo eh formado por dois numeros de ponto flutuante (doubles). A
 * contagem eh inclusiva. Assim, entre 1.0 e 3.0 existem tres inteiros
 * (1, 2 e 3), mas entre 0.2 e 0.9 nao existe nenhum.
 *
 * @param start O inicio do intervalo
 * @param end O final do interval
 * @return unsigned O numero de inteiros contidos dentro do intervalo
 * (inclusive)
 */

// unsigned interval(double start, double end)
// {
// }

unsigned interval(double start, double end)
{
  int count = 0;
  int aux = 0;

  count = floor(end - start);
  // std::cout << "(1) Até aqui o count é:" << count << std::endl;

  aux = start;

  if (aux == start)
  {
    count++;
    // std::cout << "(2)Até aqui o count é:" << count << std::endl;
  }

  // std::cout << "(3)Até aqui o ceil(count) é:" << count << std::endl;

  if (count == 0 && ceil(end - start) == 1)
  {

    count++;
  }
  return count;
}
unsigned intervals(double start, double end)
{
  if (end == (int)end)
  {
    return (int)end - (int)start + 1;
  }
  std::cout << end - start << std::endl;
  return (int)end - (int)start;
}

int main()
{

  double x;
  double y;

  std::cin >> x;
  std::cin >> y;
  std::cout << intervals(x, y) << std::endl;
}