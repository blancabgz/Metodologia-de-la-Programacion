#ifndef MATRIZDISPERSA_H
#define MATRIZDISPERSA_H

#include <iostream>
#include "valor.h"

using namespace std;

class MatrizDispersa{
  private:
    int nfilas; // numero de filas de la matriz
    int ncolumnas; // numero de columnas de la matriz
    Valor *valores; // array los valores
    int numeroValores; // numero de valores
  public:
    friend ostream & operator << (ostream &os, const MatrizDispersa &md);
    MatrizDispersa();
    MatrizDispersa(int nfilas, int ncolumnas, Valor * valores, int numeroValores);
    ~MatrizDispersa();
    MatrizDispersa(const MatrizDispersa &objcopia);
    MatrizDispersa(const int * vectorfilas, const int * vectorcolum, const double * vectorvalores);
    MatrizDispersa operator + (const MatrizDispersa &md);
};

#endif
