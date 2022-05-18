#include <set>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

void leia_sequencia_palavras(std::vector<std::string> &vec)
{
  std::ifstream inputText("in.txt");
  std::ofstream outputText;

  outputText.open("out.txt", std::ios::app);
  for (std::string str : vec)
  {
    outputText << str << std::endl;
  }
}

int main()
{
  std::vector<std::string> texto;
  leia_sequencia_palavras(texto);
  for (std::string str : texto)
  {
    std::cout << str << std::endl;
  }
}