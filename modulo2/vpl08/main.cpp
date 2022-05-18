#include <set>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Administrador de Banco de Dados (ABD).
 */
void leia_sequencia_palavras(std::vector<std::string> &vec)
{
  std::string sequencia_palavra;
  while (std::cin >> sequencia_palavra)
  {
    vec.push_back(sequencia_palavra);
  }
}

/**
 * @brief
 *Esta funcao deve ser implementada de forma a atender as expectativas do
 *Especialista em Lei Geral de Protecao de Dados.
 * THis function cannot accepts special characters
 * Essa função não pode aceitar caracteres especiais
 *
 */

// testando commit

void leia_conjunto_segredos(std::set<std::string> &segredos)
{
  std::string conjunto_segredo;
  while (std::cin >> conjunto_segredo)
  {
    if (conjunto_segredo.find('*') != std::string::npos)
    {
    }
    else
    {
      segredos.insert(conjunto_segredo);
    }
  }
}

/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Gerador de Logs no que tange a capacidade do sistema de remover palavras
 * proibidas.
 */
void substituti_strings_por_asteriscos(
    std::vector<std::string> &texto,

    std::set<std::string> &segredos)
{
  for (auto &palavra : texto)
  {
    if (segredos.find(palavra) != segredos.end())
    {
      palavra = "*";
    }
  }
}

/**
 * Esta funcao deve ser implementada de forma a atender as expectativas do
 * Gerador de Logs no que tange a capacidade do sistema de contar as palavras
 * formadas somente por asteriscos.
 */
unsigned conta_palavras_de_asterisco(std::vector<std::string> &texto)
{
  unsigned contador = 0;
  for (auto &palavra : texto)
  {
    if (palavra == "*")
    {
      contador++;
    }
  }

  return contador;
}

///============================================================================
/// O Resto do arquivo contem somente codigo de testes. Fique a vontade para
/// ler a implementacao desses testes. Porem, nao modifique essas
/// implementacoes.
///============================================================================

void testa_leitura_segredos()
{
  std::set<std::string> segredos;
  leia_conjunto_segredos(segredos);
  std::cout << segredos.size() << std::endl;
}

void testa_leitura_texto()
{
  std::vector<std::string> texto;
  leia_sequencia_palavras(texto);
  for (std::string str : texto)
  {
    std::cout << str << std::endl;
  }
}

void testa_remove_segredos()
{
  std::vector<std::string> texto;
  leia_sequencia_palavras(texto);
  std::set<std::string> segredos;
  segredos.insert("cachorros");
  segredos.insert("gatos");
  substituti_strings_por_asteriscos(texto, segredos);
  for (std::string str : texto)
  {
    std::cout << str << std::endl;
  }
}

void testa_conta_asteriscos()
{
  std::vector<std::string> texto;
  leia_sequencia_palavras(texto);
  std::cout << conta_palavras_de_asterisco(texto) << std::endl;
}

int main()
{
  char s;
  std::cin >> s;
  switch (s)
  {
  case 'a':
    testa_conta_asteriscos();
    break;
  case 'r':
    testa_remove_segredos();
    break;
  case 's':
    testa_leitura_segredos();
    break;
  case 't':
    testa_leitura_texto();
    break;
  default:
    std::cout << "Teste invalido: " << s << std::endl;
  }
}