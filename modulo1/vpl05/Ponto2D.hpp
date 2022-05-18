#ifndef PONTO2d_HPP

#define PONTO2d_HPP

#include <iostream>
#include <cmath>

struct Ponto2D
{

  double x, y;

  Ponto2D(double x = 0, double y = 0) : x(x), y(y) {}

  double calcular_distancia(Ponto2D p)
  {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
  }

  void imprimir_status()
  {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
  }
};

#endif