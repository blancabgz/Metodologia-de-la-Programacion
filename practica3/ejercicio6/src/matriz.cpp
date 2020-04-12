#include <iostream>
#include <cmath>
#include "matriz.h"
using namespace std;


void Matriz::introducirValores(int fila, int columna, int valor){
  if(fila < this->filas && columna < this->columnas){
    valores[fila][columna] = valor;
  }
}

void Matriz::mostrarMatriz(){
  for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
      cout << valores[i][j] << " ";
    }
    cout << endl;
  }
}

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

Matriz * Matriz::extraerSubmatriz(int filaInicio, int columnaInicio, int filaFin, int columnaFin){
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

void Matriz::eliminarFila(int fila){
  for(int i=fila; i<filas - 1; i++){
    for(int j=0; j<columnas; j++){
      valores[i][j] = valores[i+1][j];
    }
  }
  filas--;
}

void Matriz::eliminarColumna(int columna){
  for(int i=0; i<filas; i++){
    for(int j=columna; j<columnas - 1; j++){
      valores[i][j] = valores[i][j+1];
    }
  }
  columnas--;
}
