#include <iostream>
#include <string>
bool isnotempty;

int main()
{

  std::string word;
  int v[5][1] = {{0},
                 {0},
                 {0},
                 {0},
                 {0}};

  std::cin >> word;
  for (int i = 0; i < word.size(); i++)
  {
    if (word[i] == 'a')
    {
      v[0][0] += 1;
    }
    else if (word[i] == 'e')
    {
      v[1][0] += 1;
    }
    else if (word[i] == 'i')
    {
      v[2][0] += 1;
    }
    else if (word[i] == 'o')
    {
      v[3][0] += 1;
    }
    else if (word[i] == 'u')
    {
      v[4][0] += 1;
    }
  }
  // std::cout << v[0][0] << " " << v[1][0] << " " << v[2][0] << " " << v[3][0] << " " << v[4][0] << std::endl;

  if (v[0][0] != 0)
  {
    std::cout << "a " << v[0][0] << std::endl;
  }
  if (v[1][0] != 0)
  {
    std::cout << "e " << v[1][0] << std::endl;
  }
  if (v[2][0] != 0)
  {
    std::cout << "i " << v[2][0] << std::endl;
  }
  if (v[3][0] != 0)
  {
    std::cout << "o " << v[3][0] << std::endl;
  }
  if (v[4][0] != 0)
  {
    std::cout << "u " << v[4][0] << std::endl;
  }
}