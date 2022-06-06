#include <string>

using namespace std;

struct No {
  string chave;
  No* proximo;
  No* anterior;//Um nó pode ter um ponteiro para o nó anterior, isso seria uma lista duplamente encadeada e é bem útil para algumas operações.
};

class Conjunto {
 public:
  // Cria um conjunto vazio.
  Conjunto();

  // Testa se o conjunto é vazio.
  bool vazio();

  // Retorna a cardinalidade do conjunto.
  int cardinalidade();

  // Testa se s pertence ao conjunto.
  bool pertence(string s);

  // Retorna o menor elemento do conjunto.
  // RECONDIÇÃO: o cojunto tem pelo menos um elemento.
  string elemento();

  // Insere s no conjunto, se lá ele não está.
  void Inserir(string s);

  // Remove s do conjunto, se lá ele está.
  void Remover(string s);

  // Desaloca toda a memória alocada para o conjunto.
  ~Conjunto();
  
 private:
  No* primeiro_;  // Ponteiro para o primeiro elemento.
};

