#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void leia_sequencia_palavras(std::vector<std::string> &vec)
{
  std::ifstream inputText("in.txt");
  std::ofstream outputText;
  std::vector<std::string> texto = vec;
  outputText.open("out.txt", std::ios::app);
  for (std::string str : texto)
  {
    outputText << str << std::endl;
  }
}

int main()
{
  std::vector<std::string> texto;

  leia_sequencia_palavras(texto);
  return 0;
}