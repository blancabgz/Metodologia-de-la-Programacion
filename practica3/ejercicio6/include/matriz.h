#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>

using namespace std;

class Matriz{
  private:
    int filas;
    int columnas;
    int **valores;
  public:
    Matriz(int filas, int columnas){
      this->filas = filas;
      this->columnas = columnas;

      // creamos un vector de filas
      valores = new int *[filas];

      // creamos un vector de columnas por cada fila
      for(int i=0; i<filas; i++){
        valores[i] = new int [columnas];
      }
    }

    void introducirValores(int fila, int columna, int valor);
    void mostrarMatriz();
    Matriz * copiarMatriz();
    Matriz * extraerSubmatriz(int filaInicio, int columnaInicio, int filaFin, int columnaFin);
    void eliminarFila(int fila);
    void eliminarColumna(int columna);

};

#endif
