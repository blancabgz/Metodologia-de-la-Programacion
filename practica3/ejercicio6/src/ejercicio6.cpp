#include <iostream>
#include <cmath>
#include "matriz.h"
#include "utilidades.h"
using namespace std;

int main(){
  int filas, columnas, filaInicio, filaFin, columnaInicio, columnaFin;

  cout << "Introduce el numero de filas: ";
  cin >> filas;

  cout << "Introduce el numero de columnas: ";
  cin >> columnas;

  // Creo un objeto Matriz con el numero de filas y columnas
  Matriz matriz(filas,columnas);
  Matriz *matr = &matriz;
  pedirValores(matr,filas,columnas);

  // Mostrar la matriz
  matriz.mostrarMatriz();

  // Crear matriz copia
  Matriz * matriz_copia = matriz.copiarMatriz();

  // Mostrar la matriz copia
  cout << "Matriz copia" << endl;
  matriz_copia->mostrarMatriz();

  cout << "Introduce fila de inicio: ";
  cin >> filaInicio;
  cout << "Introduce fila de fin: ";
  cin >> filaFin;
  cout << "Introduce columna de inicio: ";
  cin >> columnaInicio;
  cout << "Introduce columna de fin: ";
  cin >> columnaFin;

  Matriz * submatriz = matriz.extraerSubmatriz(filaInicio,columnaInicio,filaFin,columnaFin);
  submatriz->mostrarMatriz();
}
