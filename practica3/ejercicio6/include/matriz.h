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

    void introducirValores(int fila, int columna, int valor){
      if(fila < this->filas && columna < this->columnas){
        valores[fila][columna] = valor;
      }
    }

    void mostrarMatriz(){
      for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
          cout << valores[i][j] << " ";
        }
        cout << endl;
      }
    }

    Matriz * copiarMatriz(){
      Matriz *copia = new Matriz(filas,columnas); // creo un puntero matriz copia
      // Copio los datos
      for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
          copia->valores[i][j] = valores[i][j]; // copio
        }
      }
      // Retorno la matriz copia
      return copia;
    }

    Matriz * extraerSubmatriz(int filaInicio, int columnaInicio, int filaFin, int columnaFin){
      // Calculo el numero de filas y columnas de la submatriz
      int filaSub = filaFin - filaInicio + 1;
      int columnaSub = columnaFin - columnaInicio + 1;
      Matriz *submatriz = new Matriz(filaSub, columnaSub); // creo un puntero con las filas y columnas de la submatriz

      int k=0, p=0;

      for(int i = filaInicio; i <= filaFin; i++,k++){
        for(int j = columnaInicio; j <= columnaFin; j++,p++){
          submatriz->valores[k][p] = valores[i][j];
  
        }
        p=0;
      }

      return submatriz;
    }

};

#endif
