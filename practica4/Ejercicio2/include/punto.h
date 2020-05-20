#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>

using namespace std;

class Punto{
  private:
    int x,y;
  public:
    Punto(); // constructor por defecto
    Punto(int x, int y); // constructor por parame
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
};

#endif
