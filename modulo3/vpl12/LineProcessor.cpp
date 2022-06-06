#include "LineProcessor.hpp"

#include <regex>
#include <cmath>
#include <vector>

LineProcessor::LineProcessor() : input_stream(std::cin),
                                 _numLinhasValidas(0), num_linhas_lidas(0) {}

void LineProcessor::processaEntrada()
{
  std::string linha;
  while (std::getline(this->input_stream, linha))
  {
    this->num_linhas_lidas++;
    if (this->linhaValida(linha))
    {
      this->_numLinhasValidas++;
      this->processaLinha(linha);
    }
  }
}

unsigned LineProcessor::numeroDeLinhasValidas() const
{
  return this->_numLinhasValidas;
}

unsigned LineProcessor::numeroDeLinhasLidas() const
{
  return this->num_linhas_lidas;
}

bool LinePrinter::linhaValida(const std::string &str) const
{
  return true;
}

void LinePrinter::processaLinha(const std::string &str)
{
  std::cout << str << '\n';
}

bool ContadorPopRural::linhaValida(const std::string &str) const
{
  std::regex regularExpr("\\s*\\w+\\s*\\d+\\s*\\d+");
  return std::regex_match(str, regularExpr);
}

void ContadorPopRural::processaLinha(const std::string &str)
{

  std::stringstream ss(str);
  std::string nomePais;

  unsigned populacao, percUrbana;
  ss >> nomePais >> populacao >> percUrbana;

  unsigned popRural = floor(populacao - (populacao * (percUrbana / 100.0)));
  std::cout << popRural << " pessoas vivem no campo no " << nomePais << std::endl;
}

bool ContadorNumNaturais::linhaValida(const std::string &str) const
{
  static const auto regular_expr = std::regex("\\s*(\\d+\\s*){1,}");
  return std::regex_match(str, regular_expr);
}

void ContadorNumNaturais::processaLinha(const std::string &str)
{
  auto sstream = std::stringstream(str);

  unsigned sum = 0;
  unsigned num;
  while (sstream >> num)
    sum += num;

  std::cout << sum << '\n';
}

bool LeitorDeFutebol::linhaValida(const std::string &str) const
{
  static const auto regular_expr = std::regex("\\s*\\w+\\s*\\d+\\s*\\w+\\s*\\d+");
  return std::regex_match(str, regular_expr);
}

void LeitorDeFutebol::processaLinha(const std::string &str)
{
  auto sstream = std::stringstream(str);

  std::string time1;
  unsigned pontos_time1;

  std::string time2;
  unsigned pontos_time2;

  sstream >> time1 >> pontos_time1 >> time2 >> pontos_time2;

  if (pontos_time1 > pontos_time2)
    std::cout << "Vencedor: " << time1 << '\n';
  else if (pontos_time2 > pontos_time1)
    std::cout << "Vencedor: " << time2 << '\n';
  else
    std::cout << "Empate\n";
}

bool ContadorDePalavras::linhaValida(const std::string &str) const
{
  return true;
}

void ContadorDePalavras::processaLinha(const std::string &str)
{
  std::cout << this->contaPalavras(str) << '\n';
}

unsigned ContadorDePalavras::contaPalavras(const std::string &str)
{
  auto sstream = std::stringstream(str);

  unsigned count = 0;
  std::string word;
  while (sstream >> word)
    count++;

  return count;
}

bool InversorDeFrases::linhaValida(const std::string &str) const
{
  static const auto regular_expr = std::regex("\\s*((([a-z]+)|([A-Z]+))\\s*){1,}");
  return std::regex_match(str, regular_expr);
}

void InversorDeFrases::processaLinha(const std::string &str)
{
  auto sstream = std::stringstream(str);

  std::vector<std::string> palavras;
  std::string word;
  while (sstream >> word)
    palavras.push_back(std::move(word));

  for (int i = palavras.size() - 1; i >= 0; i--)
    std::cout << palavras[i] << ' ';
  std::cout << '\n';
}

bool EscritorDeDatas::linhaValida(const std::string &str) const
{
  static const auto regular_expr = std::regex("\\s*\\d{1,2}/\\d{1,2}/\\d{4}");
  return std::regex_match(str, regular_expr);
}

void EscritorDeDatas::processaLinha(const std::string &str)
{
  static const char *datas[] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};

  auto sstream = std::stringstream(str);

  unsigned dia;
  unsigned mes;
  unsigned ano;
  char c;

  sstream >> dia >> c >> mes >> c >> ano;

  std::cout << datas[mes - 1] << '\n';
}