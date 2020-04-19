#ifndef CELDA_H
#define CELDA_H

#include <iostream>

using namespace std;

class Celda{
  private:
    Celda *sig;
    double info;
  public:
    Celda(){
      sig = 0;
      info = 0;
    }

    Celda(double info, Celda * sig){
      this->sig = sig;
      this->info = info;
    }

    void setSig(Celda *sig);
    void setValor(double info);
    Celda * getSig();
    double getValor();

};

#endif
