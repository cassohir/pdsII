#include <iostream>
#include <string>

int maiorFator(std::string &text)
{

  int result = std::stoi(text);

  return result;
}

int main()
{

  std::string number;
  std::cout << "Digite um numero: ";
  std::cin >> number;
  std::cout << "O maior fator de " << number << " eh " << maiorFator(number) << std::endl;
}