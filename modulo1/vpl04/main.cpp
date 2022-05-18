#include <iostream>
#include <cmath>
int main()
{

  // p = &x , o valor do que está em p vale o endereço de memória de x;

  // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
  int x = 10;

  // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
  int *p = nullptr;

  // 3) Declare um vetor de inteiros e inicialize com valoress de 9 a 0 (nessa ordem)
  int v[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

  // 4) Imprima o ENDEREÇO da variável declarada em (1)
  std::cout << &x << std::endl;

  // 5) Imprima o VALOR da variável declarada em (1)
  std::cout << x << std::endl;

  // 6) Imprima o ENDEREÇO da variável declarada em (2)
  std::cout << &p << std::endl;

  // 7) Imprima o VALOR da variável declarada em (2)
  std::cout << p << std::endl;

  // 8) Imprima o ENDEREÇO da variável declarada em (3)

  // std::cout << "Endereço do vetor:" << std::endl;
  std::cout << &v << std::endl;

  // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
  std::cout << &v[0] << std::endl;

  // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
  std::cout << v[0] << std::endl;

  // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
  p = &x;

  // 12) Imprima o VALOR da variável declarada em (2)
  std::cout << p << std::endl;

  // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
  std::cout << *p << std::endl;

  // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do VALOR de (2)
  std::cout << (&x == p) << std::endl;
  // if (&x == p)
  // {
  //   std::cout << true << std::endl;
  // }
  // else
  // {
  //   std::cout << false << std::endl;
  // }

  // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
  *p = 5;

  // 16) Imprima o VALOR da variável declarada em (1)
  std::cout << x << std::endl;

  // 17) Atribua o ENDEREÇO da variável (3) à variável declarada em (2)
  p = &v[0];

  // 18) Imprima o VALOR da variável declarada em (2)
  std::cout << p << std::endl;

  // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
  std::cout << *p << std::endl;

  // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
  p = &v[0];

  // 21) Imprima o VALOR da variável declarada em (2)
  std::cout << p << std::endl;

  // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
  std::cout << *p << std::endl;
  // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
  while (p < &v[v.size()])
  {
    *p++ *= 10;
  }

  // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
  // std::cout << v[i] << std::endl;
  for (int i = 0; i < 10; i++)
  {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;

  // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
  // std::cout << *(v + i) << std::endl;
  int *v_ptr;
  for (v_ptr = &v[0]; v_ptr < &v[v.size() - 1]; v_ptr++)
    std::cout << *v_ptr << ' ';
  std::cout << *v_ptr << '\n';

  // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
  // std::cout << "Exercicio 26" << std::endl;
  // std::cout << "Valor de P: " << v[0] << std::endl;
  for (p = &vetor[0]; p < &v[v.size() - 1]; p++)
    std::cout << *p << ' ';
  std::cout << *p << '\n';

  // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
  p = &v[4];

  // 28) Imprima o VALOR da variável declarada em (2)
  std::cout << p << std::endl;

  // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
  std::cout << *p << std::endl;

  // 30) Imprima o VALOR guardado no ENDEREÇO do ponteiro (2) decrementado de 4
  std::cout << *(p - 4) << std::endl;

  // 31) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
  int **pp = &p;

  // 32) Imprima o VALOR da variável declarada em (31)
  std::cout << pp << std::endl;

  // 33) Imprima o ENDEREÇO da variável declarada em (31)
  std::cout << &pp << std::endl;

  // 34) Imprima o VALOR guardado no ENDEREÇO apontado por (31)
  std::cout << *pp << std::endl;

  // 35) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (31)
  std::cout << **pp << std::endl;

  return 0;
}
