#ifndef VALOR_H
#define VALOR_H

#include <iostream>

using namespace std;

class Valor{
  private:
    int fila;
    int columna;
    double valor;
  public:
    Valor();
    Valor(int fila, int columna, double valor);
    void setFila(int fila);
    void setColumna(int columna);
    void setValor(int valor);
    int getFila();
    int getColumna();
    int getValor();

};

#endif
