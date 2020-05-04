#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>

using namespace std;

class Punto{
  private:
    int x,y;
  public:
    Punto();
    Punto(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
};

#endif
