#include <set>
#include <vector>
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <clocale>
#include <algorithm>

void leia_conjunto_segredos(std::set<std::string> &segredos)
{
  std::string conjunto_segredo;

  while (std::cin >> conjunto_segredo)
  {
    for (auto &c : conjunto_segredo)
    {
      if (!std::isalnum(conjunto_segredo[c]))
      {
        segredos.insert(conjunto_segredo);
      }
    }
  }
}
void testa_leitura_segredos()
{
  std::set<std::string> segredos;
  leia_conjunto_segredos(segredos);
  std::cout << segredos.size() << std::endl;
}

int main()
{
  testa_leitura_segredos();
}