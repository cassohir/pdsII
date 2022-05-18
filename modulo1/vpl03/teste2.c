#include <stdio.h>

int main()
{
  float valor;
  int aux;

  printf("Digite o numero");
  scanf("%f", &valor);

  aux = valor;
  if (aux == valor)
  {
    printf("O numero digitado era inteiro");
  }
  else
  {
    printf("O numero digitado nao era inteiro");
  }

  return 0;
}