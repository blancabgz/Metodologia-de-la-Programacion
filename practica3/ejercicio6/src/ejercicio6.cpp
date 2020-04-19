#include <iostream>
#include <cmath>
#include "matriz.h"
#include "utilidades.h"
using namespace std;

int main(){
  int filas, columnas, filaInicio, filaFin, columnaInicio, columnaFin, eliminada;
  eliminada = 0;

  cout << "Introduce el numero de filas: ";
  cin >> filas;

  cout << "Introduce el numero de columnas: ";
  cin >> columnas;
  cout << endl;

  // Creo un objeto Matriz con el numero de filas y columnas
  Matriz matriz(filas,columnas);
  Matriz *matr = &matriz;
  pedirValores(matr,filas,columnas);
  cout << endl;

  // Mostrar la matriz
  cout << "Matriz original: "<< endl;
  matriz.mostrarMatriz();
  cout << endl;

  // Crear matriz copia
  Matriz * matriz_copia = matriz.copiarMatriz();

  // Mostrar la matriz copia
  cout << "Matriz copiada a partir de la original" << endl;
  matriz_copia->mostrarMatriz();
  cout << endl;
  delete matriz_copia;

  cout << "Introduce fila de inicio: ";
  cin >> filaInicio;
  cout << "Introduce fila de fin: ";
  cin >> filaFin;
  cout << "Introduce columna de inicio: ";
  cin >> columnaInicio;
  cout << "Introduce columna de fin: ";
  cin >> columnaFin;
  cout << endl;

  // Creo submatriz con las filas y columnas introducidas
  cout << "Submatriz desde elemento (" << filaInicio << ", " << columnaInicio << ") hasta (" << filaFin << "," << columnaFin << ")" << endl;
  Matriz * submatriz = matriz.extraerSubmatriz(filaInicio,columnaInicio,filaFin,columnaFin);
  submatriz->mostrarMatriz();
  delete submatriz;
  cout << endl;

  // Eliminar primera fila
  cout << "Matriz obtenida al eliminar la primera fila" << endl;
  matriz.eliminarFila(eliminada);
  matriz.mostrarMatriz();
  cout << endl;

  // Eliminar primera columna
  cout << "Matriz obtenida al eliminar la primera columna" << endl;
  matriz.eliminarColumna(eliminada);
  matriz.mostrarMatriz();
  cout << endl;

}
