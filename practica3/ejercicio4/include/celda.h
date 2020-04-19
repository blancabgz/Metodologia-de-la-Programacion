#ifndef CELDA_H
#define CELDA_H

#include <iostream>

using namespace std;

class Celda{
  private:
    Celda *sig;
    double info;
  public:
    Celda();
    Celda(double info, Celda * sig);
    void setSig(Celda *sig);
    void setValor(double info);
    Celda * getSig();
    double getValor();

};

#endif
