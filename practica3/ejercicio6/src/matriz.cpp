#include <iostream>
#include <cmath>
#include "matriz.h"
using namespace std;

// constructor
Matriz::Matriz(int filas, int columnas){
  this->filas = filas;
  this->columnas = columnas;
  // creamos un vector de filas
  valores = new int *[filas];

  // creamos un vector de columnas por cada fila
  for(int i=0; i<filas; i++){
    valores[i] = new int [columnas];
  }
}

// Funcion para introducir valores en la fila y la columna
void Matriz::introducirValores(int fila, int columna, int valor){
  if(fila < this->filas && columna < this->columnas){
    valores[fila][columna] = valor;
  }
}

// funcion para mostrar la matriz introducidas
void Matriz::mostrarMatriz(){
  for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
      cout << valores[i][j] << " ";
    }
    cout << endl;
  }
}

// funcion para copiar una matriz
Matriz * Matriz::copiarMatriz(){
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

// extrae una submatriz dando una fila y columna con el inicio y el fin de cada una
Matriz * Matriz::extraerSubmatriz(int filaInicio, int columnaInicio, int filaFin, int columnaFin){
  // Calculo el numero de filas y columnas de la submatriz
  int filaSub = filaFin - filaInicio + 1;
  int columnaSub = columnaFin - columnaInicio + 1;
  Matriz *submatriz = new Matriz(filaSub, columnaSub); // creo un puntero con las filas y columnas de la submatriz

  int k=0, p=0;

  for(int i = filaInicio; i <= filaFin; i++ , k++){
    for(int j = columnaInicio; j <= columnaFin; j++,p++){
      submatriz->valores[k][p] = valores[i][j];
    }
    p=0;
  }

  return submatriz;
}

// Funcion para eliminar fila de la matriz
void Matriz::eliminarFila(int fil){
  int **val_red = new int *[filas-1];
  for(int i = 0; i < filas - 1; i++){
    val_red[i] = new int [columnas];
  }

  for(int j = 0, j_ant = 0; j_ant < filas; j++, j_ant++){
    if(j_ant == fil){
      j_ant++;
    }
    for(int k = 0; k < columnas; k++){
      val_red[j][k] = valores[j_ant][k];
    }
  }

  for(int i = 0; i < filas; i++){
    delete valores[i];
  }
  delete valores;
  valores = val_red;
  filas--;
}

// Funcion para eliminar una columna de una matriz
void Matriz::eliminarColumna(int col){
  int **val_red = new int *[filas];
  for(int i = 0; i < filas; i++){
    val_red[i] = new int [columnas-1];
  }

  for(int j = 0; j < filas; j++){
    for(int k = 0, k_ant = 0; k_ant < columnas; k++, k_ant++){
      if(k_ant == col){
        k_ant++;
      }
      val_red[j][k] = valores[j][k_ant];
    }
  }

  for(int i = 0; i < filas; i++){
    delete valores[i];
  }
  delete valores;
  valores = val_red;
  columnas--;
}
