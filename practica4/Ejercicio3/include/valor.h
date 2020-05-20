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
    Valor(); // constructor por defecto
    Valor(int fila, int columna, double valor); // constructor por parametro
    void setFila(int fila); // establecer fila
    void setColumna(int columna); // establecer columna
    void setValor(double valor); //establecer valor
    int getFila(); // obtener fila
    int getColumna(); // obtener columna
    double getValor(); //obtener valor

};

#endif
